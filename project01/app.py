import os
from flask import Flask
from flask import make_response
from flask import request

app = Flask(__name__)


@app.route('/new_file', methods=['POST'])
def post_file():
    if  request.method == 'POST':
        file_name = request.form['name']
        file_content = request.form['content']
        with open(file_name, 'w') as f:
            f.write(file_content)
        return 'File created successfully'
    else:
        return 'Please use POST method to create a new file'
    
@app.route('/new_file', methods=['GET'])
def get_file():
    file_name = request.args.get('name')
    if not file_name:
        return "Missing filename", 400
    
    try:
        with open(file_name, 'r') as f:
            return f.read()
        print(f'File {file_name} created successfully.')
    except FileNotFoundError:
        return "File not found", 404
    
@app.route('/new_file', methods=['PUT'])
def put_file():
    if  request.method == 'PUT':
        file_name = request.form.get('name')
        file_content = request.form.get('content')
        with open(file_name, 'w') as f:
            f.write(file_content)
        print(f'File {file_content} created successfully.')
        return 'The file modification was successful.'
    else:
        return 'Please use PUT method to create a new file'
    
@app.route('/new_file', methods=['DELETE'])
def delete_file():
    if  request.method == 'DELETE':
        file_name = request.args.get('name')
        if os.path.isfile(file_name):
            os.remove(file_name)
            return 'The file was deleted successfully.'
        else:
            return 'The file does not exist.'
    else:
        return 'Please use DELETE method to create a new file'
    

if __name__ == '__main__':
    print("http://127.0.0.1:8088")
    app.run(host='0.0.0.0', port=8088)