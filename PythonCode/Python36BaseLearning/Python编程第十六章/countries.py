# 给出国别名
# from pygal_maps_world.i18n import COUNTRIES
#
# for country_code in sorted(COUNTRIES.keys()):
#     print(country_code, COUNTRIES[country_code])

# 给出地图绘制
# import pygal_maps_world.maps
#
# wm = pygal_maps_world.maps.World()
# wm.title = "North, Central, and South America"
# # wm.add接受一个标签名与一个列表，并将其着色为同一颜色
# wm.add("North America", ['ca', 'mx', 'us'])  #
# wm.add('Central America', ['bz', 'cr', 'gt', 'hn', 'ni', 'pa', 'sv'])
# wm.add('South America', ['ar', 'bo', 'br', 'cl', 'co', 'ec', 'gf',
# 'gy', 'pe', 'py', 'sr', 'uy', 've'])
#
# wm.render_to_file("americas.svg")

# 在世界地图呈现数字数据
import pygal_maps_world.maps

wm = pygal_maps_world.maps.World()
wm.title = "Populations of Countries in North America"
wm.add("North America",{'ca': 34126000, 'us': 309349000, 'mx': 113423000})
wm.render_to_file('na_populations.svg')