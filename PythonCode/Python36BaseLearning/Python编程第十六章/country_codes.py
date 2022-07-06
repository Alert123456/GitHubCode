from pygal_maps_world.i18n import COUNTRIES


def get_country_code(country_name):
    """根据指定的国家，返回pygal使用的两个字母的国别码"""
    for code, name in COUNTRIES.items():
        if name == country_name:
            return code
        # 如果没有找到指定的国家就返回None
        if country_name == "Yemen, Rep.":
            return 'ye'
        if country_name == "Vietnam":
            return 'vn'
        if country_name == "Venezuela, RB":
            return 've'
        if country_name == "Turks and Caicos Islands":
            return 'tr'
        if country_name == "Slovak Republic":
            return 'sk'
        if country_name == "Macedonia, FYR":
            return 'mk'
    return None
