import csv
from country_codes import get_country_code
import pygal_maps_world.maps
from pygal.style import LightColorizedStyle as LCS, RotateStyle as RS

filename = 'population_data/city_world.csv'
# 打印出csv文件的第一行
country_num, year_num = 0,0
with open(filename, encoding='gb18030', errors='ignore') as f_obj:
    reader = csv.reader(f_obj)
    for num in range(5):
        header_row = next(reader)
    # for country_num, year_num in header_row:
        # if country_num == "Country Name":
    country_num = header_row.index("Country Name")
    year_num = header_row.index("2010")
    cc_gdp = {}
    for row in reader:
        code = get_country_code(row[country_num])
        if row[year_num] == "":
            row[year_num] = "0"
        gdp = int(float(row[year_num]))
        if code:
            cc_gdp[code] = gdp

cc_gdps_1, cc_gdps_2, cc_gdps_3 = {}, {}, {}
for cc, pop in cc_gdp.items():
    if pop < 10:
        cc_gdps_1[cc] = pop
    elif pop < 50:
        cc_gdps_2[cc] = pop
    else:
        cc_gdps_3[cc] = pop
wm_style = RS('#336699', base_style=LCS)
wm = pygal_maps_world.maps.World(style=wm_style)
wm.title = 'World GDP in 2010, by Country'
wm.add("GDP:0-9", cc_gdps_1)
wm.add("GDP:10-49", cc_gdps_2)
wm.add("GDP>=50", cc_gdps_3)
wm.render_to_file("world_gdp.svg")
