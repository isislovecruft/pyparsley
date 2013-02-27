# Parsley #
===========
Python 2.x bindings for Parsley, an implementation of OMeta, an object-oriented parsing language. Tested with Python 2.5, 2.6, and 2.7.

## INSTALLATION ##

### Get Parsley and Dependencies ###
Download Parsley from https://github.com/isislovecruft/parsley.git

Parsley requires libxml2:

    $ sudo apt-get install libxml2-dev libxslt1-dev

For Python 2.5, the simplejson library is required.  For Python 2.6 and later, the stdlib json library is used.	

### Install pyparsely ###

#### Debian/Ubuntu ####
-----------------------

```
sudo apt-get install libxslt1-dev libpcre3-dev build-essential shtool libtool bison flex wget
wget http://oss.metaparadigm.com/json-c/json-c-0.8.tar.gz
tar -zxf json-c-0.8.tar.gz
cd json-c-0.8
./configure
make
sudo make install
cd ..
cp /usr/share/shtool/sh.install ./install.sh
cp /usr/share/libtool/install-sh ./
cp /usr/share/libtool/ltmain.sh ./
cp /usr/share/automake-*/depcomp ./
cp /usr/share/automake-*/ylwrap ./
touch missing
./configure
make
sudo make install
sudo python setup.py install
```

### Example Code ###
```
  from pyparsley import PyParsley

  # Valid options (all are named arguments):
  #
  # Requires one of:
  # 'file' -- the input file path or url
  # 'string' -- the input string
  #
  # And optionally (default is the first listed value):
  # 'input' => ['html', 'xml']
  # 'output' => ['python', 'json', 'xml']
  # 'prune' => [true, false]
  # 'collate' => [true, false]
  # 'base' => 'http://some/base/href'
  # 'allow_net' => [true, false]
  # 'allow_local' => [true, false]

  parselet = PyParsley({ 
                         "title": "title", 
                         "links(a)": [
                           { 
                             "name": ".", 
                             "href": "@href" 
                           }
                         ]
                       })
  json_string = parselet.parse(file = some_file, output = "json")
  # Using Parsley's builtin URI fetching.
  json_string = parselet.parse(file = "http://www.example.com/", output = "json")
```