#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
const long long daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};//月份
long long n;
long long topic[50001];
long long cnt;//计数器
long long year1,month1,day1,hour1,minute1;//初始时间
long long year2,month2,day2,hour2,minute2;//结束时间
bool leap_year(long long sum){//闰年
	if ((sum%100!=0&&sum%4==0)||sum%400==0) {
		return true;
	}else {
		return false;
	}
}
long long time1(){//0~初始时间
	long long sum=0;
	for (long long i=1; i<year1; i++) {
		sum+=(365+leap_year(i))*24*60;
	}
	for (long long i=0; i<month1-1; i++) {
		sum+=(daysInMonth[i]+(leap_year(year1)&&i==1))*24*60;
	}
	if (month1>2&&leap_year(year1)) {
		sum+=24*60;
	}
	sum+=day1*24*60+hour1*60+minute1;
	return sum;
}
long long time2(){//0~结束时间
	long long sum=0;
	for (long long i=1; i<year2; i++) {
		sum+=(365+leap_year(i))*24*60;
	}
	for (long long i=0; i<month2-1; i++) {
		sum+=(daysInMonth[i]+(leap_year(year2)&&i==1))*24*60;
	}
	if (month2>2&&leap_year(year2)) {
		sum+=24*60;
	}
	sum+=day2*24*60+hour2*60+minute2;
	return sum;
}
long long time_difference(){
	long long ans=0;
	ans=time2()-time1();
	return ans;
}
int main(){
	cin>>n;
	for (long long i=0; i<n; i++) {
		cin>>topic[i];
	}
	sort(topic, topic+n);//排序，减少时间复杂度
	scanf("%lld-%lld-%lld-%lld:%lld",&year1,&month1,&day1,&hour1,&minute1);
	scanf("%lld-%lld-%lld-%lld:%lld",&year2,&month2,&day2,&hour2,&minute2);//输入
	int ans=time_difference();
	for (int i=0; i<n; i++) {
		if (ans>=topic[i]) {
			cnt++;
			ans-=topic[i];
		}else {
			break;
		}
	}
	cout<<cnt;
	/*								      _ooOoo_
										 o8888888o
										 88" . "88
										 (| -_- |)
									      O\ = /O
									  ____/`---'\____
										.   ' \\| |// `.
									/ \\||| : |||// \
									/ _||||| -:- |||||- \
									| | \\\ - /// | |
									| \_| ''\---/'' | |
									\ .-\__ `-` ___/-. /
								___`. .' /--.--\ `. . __
								."" '< `.___\_<|>_/___.' >'"".
							  | | : `- \`.;`\ _ /`;.`/ - ` : | |
								\ \ `-. \_ __\ /__ _/ .-` / /
					    ======`-.____`-.___\_____/___.-`____.-'======
											`=---='
				   	....................................................
								佛祖保佑             永无BUG
					佛曰:
								写字楼里写字间，写字间里程序员；
								程序人员写程序，又拿程序换酒钱。
								酒醒只在网上坐，酒醉还来网下眠；
								酒醉酒醒日复日，网上网下年复年。
								但愿老死电脑间，不愿鞠躬老板前；
								奔驰宝马贵者趣，公交自行程序员。
								别人笑我忒疯癫，我笑自己命太贱；
								不见满街漂亮妹，哪个归得程序员？
	*/
	return 0;
}