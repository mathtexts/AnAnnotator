{\rtf1\ansi\ansicpg1251\cocoartf1404\cocoasubrtf340
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \uc0\u1055 \u1088 \u1080  \u1088 \u1077 \u1072 \u1083 \u1080 \u1079 \u1072 \u1094 \u1080 \u1080  \u1072 \u1085 \u1085 \u1086 \u1090 \u1072 \u1090 \u1086 \u1088 \u1072  \u1080 \u1089 \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1083 \u1072 \u1089 \u1100  \u1089 \u1080 \u1089 \u1090 \u1077 \u1084 \u1072  OS X El Capitan \u1074 \u1077 \u1088 \u1089 \u1080 \u1080  10.11.2.\
\uc0\u1044 \u1083 \u1103  \u1079 \u1072 \u1087 \u1091 \u1089 \u1082 \u1072  \u1085 \u1072  \u1076 \u1088 \u1091 \u1075 \u1080 \u1093  \u1089 \u1080 \u1089 \u1090 \u1077 \u1084 \u1072 \u1093  \u1074 \u1077 \u1088 \u1086 \u1103 \u1090 \u1085 \u1086  \u1087 \u1088 \u1080 \u1076 \u1077 \u1090 \u1089 \u1103  \u1085 \u1077 \u1084 \u1085 \u1086 \u1075 \u1086  \u1080 \u1079 \u1084 \u1077 \u1085 \u1080 \u1090 \u1100  \u1092 \u1072 \u1081 \u1083  CMakeLists.txt.\
\
\uc0\u1044 \u1083 \u1103  \u1089 \u1073 \u1086 \u1088 \u1082 \u1080  \u1085 \u1077 \u1086 \u1073 \u1093 \u1086 \u1076 \u1080 \u1084 \u1086 :\
1) \uc0\u1074  \u1082 \u1086 \u1088 \u1085 \u1077 \u1074 \u1086 \u1081  \u1087 \u1072 \u1087 \u1082 \u1077  \u1074 \u1099 \u1087 \u1086 \u1083 \u1085 \u1080 \u1090 \u1100  \
	cmake .\
	make\
2) \uc0\u1074  \u1092 \u1072 \u1081 \u1083 \u1077  CMakeLists.txt \u1080 \u1079 \u1084 \u1077 \u1085 \u1080 \u1090 \u1100  \u1082 \u1086 \u1084 \u1084 \u1077 \u1085 \u1090 \u1080 \u1088 \u1086 \u1074 \u1072 \u1085 \u1080 \u1077 \
	\uc0\u1047 \u1072 \u1082 \u1086 \u1084 \u1084 \u1077 \u1085 \u1090 \u1080 \u1088 \u1086 \u1074 \u1072 \u1090 \u1100 :\
	set(SOURCE_FILES main.cpp)\
	add_executable(Progr $\{SOURCE_FILES\})\
	target_link_libraries(Progr $\{UIMA\})\
	\uc0\u1056 \u1072 \u1089 \u1082 \u1086 \u1084 \u1084 \u1077 \u1085 \u1090 \u1080 \u1088 \u1086 \u1074 \u1072 \u1090 \u1100 :\
	#set(SOURCE_FILES UimaAnnotator/FAnnotator.h UimaAnnotator/FAnnotator.cpp)\
	#add_library(FAnnotator SHARED $\{SOURCE_FILES\})\
	#set_target_properties(FAnnotator PROPERTIES PREFIX "")\
	#target_link_libraries(FAnnotator $\{UIMA\})\
3) \uc0\u1074 \u1099 \u1087 \u1086 \u1083 \u1085 \u1080 \u1090 \u1100 :\
	cmake .\
	make\
4) \uc0\u1057 \u1086 \u1079 \u1076 \u1072 \u1074 \u1096 \u1080 \u1081 \u1089 \u1103  \u1092 \u1072 \u1081 \u1083  FAnnotator.dylib \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1089 \u1090 \u1080 \u1090 \u1100  \u1074  \u1087 \u1072 \u1087 \u1082 \u1091  bin\
5) \uc0\u1055 \u1077 \u1088 \u1077 \u1081 \u1090 \u1080  \u1074  \u1087 \u1072 \u1087 \u1082 \u1091  bin  \u1080  \u1074 \u1099 \u1087 \u1086 \u1083 \u1085 \u1080 \u1090 \u1100  ./Progr}