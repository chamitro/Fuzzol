#!/usr/bin/env python -tt

import fnmatch
import os
import os.path
import sys
import json
import io
import pandas as pd
import plotly.plotly as py
import plotly.graph_objs as go
import matplotlib.pyplot as plt; plt.rcdefaults()
import numpy as np
import matplotlib.pyplot as plt
import csv
import datetime


mopt_crashes = 0
fast_crashes=0
fuzzol_crashes=0
superion_crashes=0

mopt_paths=0
data2={ }
data2['Solidity']={ }
data2['Solidity']['MOpt']={}
data2['Solidity']['FAST']={}
data2['Solidity']['Superion']={}
data2['Solidity']['Fuzzol']={}
#data2['Solidity'][sys.argv[1]]={}
arg_count=0
all_args = len(sys.argv)-1
print(all_args)
for x in range(0,all_args):
	print(x)
	arg_count=arg_count+1
	data2['Solidity']['MOpt'][sys.argv[arg_count]]={}
	data2['Solidity']['FAST'][sys.argv[arg_count]]={}
	data2['Solidity']['Superion'][sys.argv[arg_count]]={}
	data2['Solidity']['Fuzzol'][sys.argv[arg_count]]={}
	print(arg_count)
	for dirName, subdirList, fileList in os.walk(sys.argv[arg_count]):
		lastpart = os.path.basename(os.path.normpath(dirName))
	#	print(lastpart)
	#	print(subdirList)
		if 'Mopt' in lastpart:
			print('Mpikame ston Mopt')
			print(lastpart)
	#		data2['Solidity'][sys.argv[1]]={}
			for d2, sd2, f2 in os.walk(dirName):
	#			lastpart2 = os.path.basename(os.path.normpath(d))
				print(d2)
				lastpart2 = os.path.basename(os.path.normpath(d2))
				print(lastpart2)
				if 'crashes' in lastpart2:
						print(f2) #edw print ta crashes
	#					t = os.path.getmtime(f2)
	#					print("creation time of ", f2, "is ", 1)
						mopt_crashes = len(f2)-2 #-README and current_dir
						if len(f2) == 0:
							mopt_crashes = 0
						print('KOU')
						data2['Solidity']['MOpt'][sys.argv[arg_count]]=mopt_crashes
						print('mopt crashes = ', mopt_crashes)

		if 'FAST' in lastpart:
				print('Mpikame ston aflfast')
				print(lastpart)
	#			data2['Solidity'][sys.argv[1]]={}
				for d2, sd2, f2 in os.walk(dirName):
		#			lastpart2 = os.path.basename(os.path.normpath(d))
					print(d2)
					lastpart2 = os.path.basename(os.path.normpath(d2))
					print(lastpart2)
					if 'crashes' in lastpart2:
						print(f2) #edw print ta crashes
	#					t = os.path.getmtime(f2)
	#					print("creation time of ", f2, "is ", 1)
						fast_crashes = len(f2)-2 #-README and current_dir
						if len(f2) == 0:
							fast_crashes = 0
						print('KOU')
						data2['Solidity']['FAST'][sys.argv[arg_count]]=fast_crashes
						print('fast crashes = ', fast_crashes)

		if 'fuzzol' in lastpart:
				print('Mpikame ston fuzzol')
				print(lastpart)
	#			data2['Solidity'][sys.argv[1]]['fuzzol']={}
				for d2, sd2, f2 in os.walk(dirName):
		#			lastpart2 = os.path.basename(os.path.normpath(d))
					print(d2)
					lastpart2 = os.path.basename(os.path.normpath(d2))
					print(lastpart2)
					if 'crashes' in lastpart2:
						print(f2) #edw print ta crashes
	#					t = os.path.getmtime(f2)
	#					print("creation time of ", f2, "is ", 1)
						fuzzol_crashes = len(f2)-2 #-README and current_dir
						if len(f2) == 0:
							fuzzol_crashes = 0
						print('KOU')
					data2['Solidity']['Fuzzol'][sys.argv[arg_count]]=fuzzol_crashes
					print('fuzzol crashes = ', fuzzol_crashes)

		if 'Superion' in lastpart:
				print('Mpikame ston superion')
				print(lastpart)
#				data2['Solidity'][sys.argv[arg_count]]['Superion']={}
				for d2, sd2, f2 in os.walk(dirName):
		#			lastpart2 = os.path.basename(os.path.normpath(d))
					print(d2)
					lastpart2 = os.path.basename(os.path.normpath(d2))
					print(lastpart2)
					if 'crashes' in lastpart2:
						print(f2) #edw print ta crashes
	#					t = os.path.getmtime(f2)
	#					print("creation time of ", f2, "is ", 1)
						superion_crashes = len(f2)-2 #-README and current_dir
						if len(f2) == 0:
							superion_crashes = 0
	#					print('KOU')
						data2['Solidity']['Superion'][sys.argv[arg_count]]=superion_crashes
						print('superion crashes = ', superion_crashes)

print 'JSON', json.dumps(data2)
with open('results.json','w') as f:
	json.dump(data2, f, indent=2, ensure_ascii=False)



df = pd.DataFrame(data2['Solidity'])
print(df)
print(len(sys.argv))
df.to_csv('file22.csv') 
#df=pd.read_csv('file1.csv',delimiter=',',header=[0,1,2], )
#index = ['snail', 'pig', 'elephant','rabbit', 'giraffe', 'coyote', 'horse']
df=pd.read_csv('file22.csv',delimiter=',') #me tin  skiprows=[4, 5] kanoume ena en
print(df)
#print(df['./v7.1'][3])
print("KOIKKSK")
print(df.index)
#print(df.columns)
#print(df['Unnamed: 0'].head())
#ax=df.plot(kind="barh")
#ax = df[["./v7.1","./v7.3"]].hist(bins=2)
df.plot(x="Unnamed: 0", y=["FAST","MOpt","Superion","Fuzzol"], kind="bar")
plt.show()


#df.plot(figsize=(15, 10))
#df.plot.bar()
#bars = ('v7.1', 'v7.2')
#y_pos = np.arange(len(bars))
##plt.bar(y_pos,)
#plt.title('Solidity Compiler Versions Errors')
#plt.xlabel('Fuzzers')
#plt.ylabel('crashes')
#plt.xticks(y_pos, bars)

#plt.show()

			
					
#							for f in fileList:
#								print(f)


#python results.py ./v7.3
#Ta sys.argv[] tha einai tosa osa kai ta versions, opote tha kanw tin for gia kathe sys.argv

#python results.py ./v7.3 ./v7.1
