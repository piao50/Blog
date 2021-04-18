#!/bin/bash

echo 'hello, gushi'

HOSTNAME="localhost"
PORT=3306
USERNAME="weigu"
PASSWORD="gushi_weigu"
DBNAME="mi"
TABLENAME="mi_data_202101"

# id=1/

echo "${time}"

for i in {1..10}
do
	time=`date '+%Y-%m-%d %H:%M:%S'`
	insert_sql="insert into ${TABLENAME} (time, id)values('${time}',${i})"
	echo "${insert_sql}"
	mysql -h${HOSTNAME} -P${PORT} -u${USERNAME} -p${PASSWORD} ${DBNAME} -e "${insert_sql}"
	sleep 1
done

# for i in {1..10}
# do
# 	echo "$i"
# 	sleep 1
# done

echo 'bye, gushi'