import requests
from pprint import pprint

root_url = "https://www.dnd5eapi.co/api/"

response = requests.get(root_url+"spells/acid-arrow")

pprint(response.json())