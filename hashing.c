#include <stdio.h>
#include <string.h>

int main()
{
int n;
char str[100];
fscanf(stdin, "%d", &n);
while(n--) {
int a[26];

int i;
for(i=0;i<26;++i) {
a[i] = 0;
}
fscanf(stdin, "%s", str);
for( i=0; i<strlen(str); ++i) {
a[str[i]-97]++;
}

for(i=0;i<26;++i) {
if(a[i] > 1) {
fprintf(stdout, "Yes\n");
i=27;
}
}
if(i==26)
fprintf(stdout, "No\n");
}
return 0;
}
