#include <cstring>

int sillyString(const char* s){
	int rc=0;
	for(int i=0;i<strlen(s);i++){
		rc+=s[i];
	}
	return rc;
}

int sillyString2(const char* s){
	int rc=0;
	int len=strlen(s);
	for(int i=0;i<len;i++){
		rc+=s[i];
	}
	return rc;
}

int sillyString3(const char* s){
	int rc=0;
	for(int i=0;s[i]!='\0';i++){
		rc+=s[i];
	}
	return rc;
}