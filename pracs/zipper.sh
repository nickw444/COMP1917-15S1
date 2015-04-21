#!/bin/sh
zip -r $1.zip $1
chmod 755 $1.zip
mv $1.zip ~/public_html/1917/
