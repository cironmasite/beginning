import os
with open("./data.txt","w",encoding="utf-8") as f:
    f.write("hello world\n");
    f.write("Hiii\n");

with open("./data.txt","a",encoding="utf-8") as f:
    f.write("This is an additional item")

file_path = './\data.txt'
if os.path.isfile(file_path):
    print(f'File {file_path} exists, proceed to delete.')
else:
    print(f'File {file_path} does not exist, skip deletion.')

'''try:
    os.remove(file_path)
    print(f'File {file_path} deleted successfully.')
except OSError as e:
    print(f'Error occurred: {e}')'''

with open("./data.txt","r",encoding="utf-8") as f:
    content = f.read()
    print(content)
    if "Hiii" in content:
        print("Keyword found in the file.")
    else:
        print("Keyword not found in the file.")



