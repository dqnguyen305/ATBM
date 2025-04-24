#include<bits/stdc++.h>
using namespace std;

int KT_So(char c){
	return c-'A';
}
char So_KT(int n){
	return 'A' +n;
}
//CAESAR
//int main(){
//	string p,c,s,d;
//	int k;
//	cout<<"Nhap chuoi plaintext: "; getline(cin,p);
//	cout<<"Nhap khoa k: "; cin>>k;
//	
//	for(int i=0;i<p.size();i++){
//		int m = (KT_So(p[i])+k)%26;
//		c+=So_KT(m);
//	}
//	for(int i=0;i<c.size();i++){
//		int m = (KT_So(c[i])-k+26)%26;
//		s+=So_KT(m);
//	}
//	cout<<c<<"   "<<s;
//	k = 0;
//	for(k=0;k<26;k++){
//		d="";
//		for(int i=0;i<c.size();i++){
//			int m = (KT_So(c[i])-k+26)%26;
//			d+=So_KT(m);
//		}
//		cout<<k<<"  "<<d<<endl;
//	}
//}

//AFFINE
//int main(){
//	string p,c,s;
//	int a,b;
//	cout<<"Nhap chuoi plaintext: "; getline(cin,p);
//	while(a%2==0||a%13==0){
//		cout<<"Nhap khoa A: "; cin>>a;
//	}
//	cout<<"Nhap khoa B: "; cin>>b;
//	for(int i =0; i<p.size();i++){
//		int m = (a*KT_So(p[i])+b)%26;
//		c+= So_KT(m);
//	}
//	int a1;
//	for(int i =1;i<26;i++){
//		if(i*a%26==1) {
//			a1 = i;
//			break;
//		}
//	}
//	for(int i=0;i<c.size();i++){
//		int m = a1*(KT_So(c[i])-b+26)%26;
//		s+= So_KT(m);
//	}
//	cout<<c<<"   "<<s<<endl;
//	a=0;b=0;
//	for(a=1;a<26;a+=2){
//		if(a!=13){
//			for(int i =1;i<26;i++){
//				if(i*a%26==1) {
//					a1 = i;
//					break;
//				}
//			}
//			for(b=0;b<26;b++){
//				s = "";
//				for(int i=0;i<c.size();i++){
//					int m = a1*(KT_So(c[i])-b+26)%26;
//					s+= So_KT(m);
//				}
//				cout<<a<<"  "<<b<<"  "<<s<<endl;
//			}
//		}
//	}
//}


//MONOALPHABETIC
//int main(){
//	string p,c,s,k;
//	string b;
//	for(char a = 'A'; a<='Z';a++){
//		b+=a;
//	}
//	cout<<b<<endl;
//	cout<<"Nhap chuoi Plaintext: "; getline(cin,p);
//	cout<<"Nhap khoa K: "; getline(cin,k);
//	for(int i =0;i<p.size();i++){
//		int j = b.find(p[i]);
//		c += k[j];
//	}
//	for(int i =0;i<c.size();i++){
//		int j = k.find(c[i]);
//		s += b[j];
//	}
//	cout<<c<<"   "<<s<<endl;
//}

//DEM
//int main(){
//	string s;
//	cout<<"Nhap chuoi: "; getline(cin,s);
//	int dem =0;
//	for(int i=0;i<s.size();i++){
//		if(s[i]==s[0]) dem++;
//	}
//	cout<<dem;
//}

//TANSUAT
//int main(){
//	string s,n,c;
//	cout<<"Nhap chuoi: "; getline(cin,s);
//	for(int i=0;i<s.size();i++){
//		if(s[i]>='A' && s[i]<='Z') s[i] += 32;
//		if(s[i]>='0' && s[i]<='9') n+=s[i];
//		if(s[i]>='a' && s[i]<='z') n+=s[i];
//	}
//	c =n;
//	sort(n.begin(),n.end());
//	for(int i = 0;i<n.size();i++){
//		if(n[i]==n[i+1]){
//			n.erase(i+1,1);
//			i--;
//		}
//	}
//	for(int i =0;i<n.size();i++){
//		int dem = 0;
//		for(int j =0;j<c.size();j++){
//			if(c[j]==n[i]) dem++;
//		}
//		cout<<n[i]<<"   "<<dem<<endl;
//	}
//}

//PLAYFAIR
//int main(){
//	string p,c,s,k;
//	char a[5][5];
//	cout<<"Nhap tu khoa: "; getline(cin,k);
//	for(char a = 'A';a<='Z';a++){
//		if(a != 'J') k+=a;
//	}
//	for(int i=0;i<k.size();i++){
//		for(int j = i+1;j<k.size();j++){
//			if(k[i]==k[j]) {
//				k.erase(j,1); j--;
//			}
//		}
//	}
//	int dem=0;
//	for(int i=0;i<5;i++){
//		for(int j=0;j<5;j++){
//			a[i][j] = k[dem];
//			dem++;
//		}
//	}
//	for(int i=0;i<5;i++){
//		for(int j=0;j<5;j++){
//			cout<<a[i][j];
//		}
//		cout<<endl;
//	}
//	cout<<"Nhap chuoi ma hoa: "; getline(cin, p);
//	for(int i = 0;i<p.size();i++){
//		if(p[i]==p[i+1]){
//			p.insert(i+1,"X");
//		}
//	}
//	if(p.size()%2 ==1) p += 'X';
//	c =p;
//	int c1,c2,h1,h2;
//	for(int m=0;m<p.size();m+=2){
//		for(int i=0;i<5;i++){
//			for(int j=0;j<5;j++){
//				if(p[m] == a[i][j]){
//					h1=i;
//					c1=j;
//				}
//				if(p[m+1] == a[i][j]){
//					h2=i;
//					c2=j;
//				}
//			}
//		}
//		if(h1!=h2 &&c1!=c2){
//			c[m] = a[h1][c2];
//			c[m+1] = a[h2][c1];
//		} else if(h1 == h2){
//			if(c1+1>=5) c1=-1;
//			if(c2+1>=5) c2=-1;
//			c[m] = a[h1][c1+1];
//			c[m+1] = a[h2][c2+1];
//		} else if(c1 == c2){
//			if(h1+1>=5) h1=-1;
//			if(h2+1>=5) h2=-1;
//			c[m] = a[h1+1][c1];
//			c[m+1] = a[h2+1][c2];
//		}
//	}
//	cout<<"Chuoi ma hoa: "<<c;
//	s=c;
//	for(int m=0;m<c.size();m+=2){
//		for(int i=0;i<5;i++){
//			for(int j=0;j<5;j++){
//				if(c[m] == a[i][j]){
//					h1=i;
//					c1=j;
//				}
//				if(c[m+1] == a[i][j]){
//					h2=i;
//					c2=j;
//				}
//			}
//		}
//		if(h1!=h2 &&c1!=c2){
//			s[m] = a[h1][c2];
//			s[m+1] = a[h2][c1];
//		} else if(h1 == h2){
//			if(c1-1<0) c1=5;
//			if(c2-1<0) c2=5;
//			s[m] = a[h1][c1-1];
//			s[m+1] = a[h2][c2-1];
//		} else if(c1 == c2){
//			if(h1-1<0) h1=5;
//			if(21-1<0) h2=5;
//			s[m] = a[h1-1][c1];
//			s[m+1] = a[h2-1][c2];
//		}
//	}
//	cout<<"\nChuoi giai ma: "<<s;
//	
//}


//Vigenere
//int main(){
//	string p,c,k,s;
//	cout<<"Nhap chuoi Plaintext: "; getline(cin,p); ///WEWILLMEETATNIGHT
//	cout<<"Nhap khoa K: "; getline(cin,k); //CIRPHE
//	
//	int j =0;
//	for(int i=0;i<p.size();i++){
//		int m = (KT_So(p[i])+KT_So(k[j]))%26;
//		c+=So_KT(m);
//		j++;
//		if(j == k.size()){
//			j=0;
//		}
//	}
//	cout<<"Chuoi ma hoa: "<<c<<endl;
//	j=0;
//	for(int i=0;i<c.size();i++){
//		int m = (KT_So(c[i])-KT_So(k[j])+26)%26;
//		s+=So_KT(m);
//		j++;
//		if(j == k.size()){
//			j=0;
//		}
//	}
//	cout<<"Chuoi giai ma: "<<s<<endl;
//	
//}

//VERNMAN
//int main(){
//	string p,k,e,c,s;
//	cout<<"Nhap chuoi Plaintext: "; getline(cin,p);
//	cout<<"Nhap khoa K: "; getline(cin,k);
//	e=k;
//	while(e.size()<p.size()) e+=k;
//	e =e.substr(0,p.size());
//	c =p;
//	for(int i=0;i<p.size();i++){
//		c[i] = p[i]^k[i];
//	}
//	cout<<"Chuoi ma hoa: ";
//	for(int i=0;i<p.size();i++){
//		cout<<(int)(unsigned char)c[i]<<" ";
//	}
//	cout<<endl;
//	s=c;
//	for(int i=0;i<c.size();i++){
//		s[i] = c[i]^k[i];
//	}
//	cout<<"Chuoi giai ma: "<<s<<endl;
//	
//}

//RAINFENCE
//int main(){
//	string p,c,c1,c2;
//	cout<<"Nhap chuoi Plaintext: "; getline(cin,p);
//	for(int i=0;i<p.size();i++){
//		if(i%2==0) c1+=p[i];
//		else c2+=p[i];
//	}
//	c=c1+c2;
//	cout<<"Chuoi ma hoa: "<<c<<endl;
//	int n;
//	p="";c1="";c2="";
//	if(c.size()%2==0) n=0; else n=1;
//	for(int i=0;i<c.size();i++){
//		if(i<c.size()/2+n) c1+=c[i];
//		else c2+=c[i];
//	}
//	for(int i=0;i<c.size()/2;i++){
//		p = p+c1[i]+c2[i];
//	}
//	if(n==1) p+=c1[c1.size()-1];
//	cout<<"Chuoi giai ma: "<<p<<endl;
//}

//HOANVI
int main(){
	string p,c,s;
	cout<<"Nhap chuoi Plaintext: "; getline(cin,p);
	char a[5][5];
	int d=0;
	for(int i=0;i<5;i++){
		for(int j =0;j<5;j++){
			a[i][j]=p[d];
			d++;
			if(d>p.size()){
				a[i][j] = 'X';
			}
		}
	}
	for(int i=0;i<5;i++){
		for(int j =0;j<5;j++){
			c+=a[j][i];
			cout<<a[j][i];
		}
		cout<<endl;
	}
	cout<<"Chuoi ma hoa: "<<c<<endl;
	d=0;
	for(int i=0;i<5;i++){
		for(int j =0;j<5;j++){
			a[j][i]=c[d];
			d++;
			if(d>c.size()){
				a[j][i] = 'X';
			}
		}
	}
	for(int i=0;i<5;i++){
		for(int j =0;j<5;j++){
			s+=a[i][j];
		}
	}
	cout<<"Chuoi giai ma: "<<s<<endl;
	
	
}
