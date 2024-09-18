#include <iostream>

using namespace std;
void godBless()
{
	
	//                              _ooOoo_
	//                             o8888888o
	//                             88" . "88
	//                             (| -_- |)
	//                              O\ = /O
	//                           ____/`---'\____
	//                        .   ' \\| |// `.
	//                         / \\||| : |||// \
	//                        / _||||| -:- |||||- \
	//                         | | \\\ - /// | |
	//                       | \_| ''\---/'' | |
	//                        \ .-\__ `-` ___/-. /
	//                    ___`. .' /--.--\ `. . __
	//                  ."" '< `.___\_<|>_/___.' >'"".
	//                 | | : `- \`.;`\ _ /`;.`/ - ` : | |
	//                    \ \ `-. \_ __\ /__ _/ .-` / /
	//           ======`-.____`-.___\_____/___.-`____.-'======
	//                              `=---='
	//
	//           .............................................
	//                     佛祖保佑             永无BUG
	//            佛曰:
	//                     写字楼里写字间，写字间里程序员；
	//                     程序人员写程序，又拿程序换酒钱。
	//                     酒醒只在网上坐，酒醉还来网下眠；
	//                     酒醉酒醒日复日，网上网下年复年。
	//                     但愿老死电脑间，不愿鞠躬老板前；
	//                     奔驰宝马贵者趣，公交自行程序员。
	//                     别人笑我忒疯癫，我笑自己命太贱；
	//                     不见满街漂亮妹，哪个归得程序员？
}
bool zs(int c){
	if (c==1||c==0)
		return false;
	for (int d=2; d<c; d++) {
		if (c%d==0)
			return false;
	}
	return true;
}
int main() {
	godBless();
	int a,b;
	cin>>a>>b;
	int f=0;
	for (int e=0;e<b; e++) {
		if (zs(e))
			f++;
	}
	int g[f];
	int h=0;
	for (int e=0;e<b; e++) {
		if (zs(e)) {
			g[h]=e;
			h++;
		}
	}
	for (int kk=a; kk<b; kk++) {
		int i=kk;
		cout<<i<<"=";
		int l=1;
		if (kk==1)
			cout<<1;
		for (int j=0; j<a*b; j++) {
			int k=0;
			if (zs(i)&&l==1) {
				cout<<i;
				l=0;
				break;
			}
			else if (zs(i)&&l==0) {
				cout<<"*"<<i;
				l=0;
				break;
			}
			else if (l==1&&!(zs(i))) {
				for (int l=0;l<i;l++) {
					if (i%g[k]==0) {
						i=i/g[k];
						cout<<g[k];
						break;
					}
					else
						k++;
				}
				l=0;
			}
			else{
				int k=0;
				for (int l=0; l<i; l++) {
					if (i%g[k]==0) {
						i=i/g[k];
						cout<<"*"<<g[k];
						break;
					}
					else
						k++;
				}
			}
		}
		cout<<endl;
	}
}