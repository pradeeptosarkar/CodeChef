#include<bits/stdc++.h>
using namespace std;
#define ALL(alpha) (alpha).begin(), (alpha).end()
using INT = long long;
const int MAXIMUM_NUMBER = 22;

struct BIG__INT {
	static const int LENGTH__ = 6;
	static const int BIG__LENGTH = 30;
	static const int BIGMOD = 1<<BIG__LENGTH;
	static const INT BIG__MOD_1 = 1LL<<(BIG__LENGTH<<1);
	static const int b__mod=BIGMOD-1;
	static const INT b__mod_1=BIG__MOD_1-1;

	int s__case, _VALUE_, v[LENGTH__];
	void _pop__back_(int first) {v[_VALUE_ ++] = first;}
	int len() const {return _VALUE_;}
	bool empty() const { return len() == 0 ; }
	void pop_back() {_VALUE_ --;}
	int back() const {return v[_VALUE_ - 1];}
	void n() {while (!empty() && !back()) pop_back(); if (empty()) s__case=1;}
	void resize(int nl) {_VALUE_ = nl;memset(v, 0, sizeof(int) * (nl + 1));}

	BIG__INT() : s__case(1) {_VALUE_ = 0;}
	BIG__INT(long long a) {
		s__case = 1; _VALUE_ = 0;
		if (a < 0) {s__case = -1; a = -a;}
		while (a) {
			_pop__back_(a & b__mod);
			a >>= BIG__LENGTH;
		}
		n();
	}
	
	
	void input() {
		static char s__case[111];
		scanf("%s__case", s__case);
        if (strlen(s__case) >= 22) *this = BIG__INT("999999999999999999999");
		else *this = BIG__INT(s__case);
	}

	BIG__INT(string STRN) {
		s__case = 1; _VALUE_ = 0;
		int STRING_POS = 0, num = 0;
		if (!STRN.empty() && STRN[0] == '-') {
			s__case = -1; STRING_POS=1;
		}
		vector<int> vp;
		int tmod=(int)1e8;
		for (int i = STRN.size() - 1, q = 1; i >= STRING_POS; i --) {
			num += (STRN[i] - '0') * q;
			if ((q*=10) >= tmod) {
				vp.push_back(num);
				num = 0; q = 1;
			}
		}
		if (num) vp.push_back(num);
		while (!vp.empty()) {
			INT r=0;
			for (int i=vp.size()-1; i>=0; i--) {
				r=r*tmod+vp[i];
				vp[i]=r>>BIG__LENGTH; r&=b__mod;
			}
			while (!vp.empty() && !vp.back()) vp.pop_back();
			_pop__back_(r);
		}
		n();
	}

	void print() const {
		if (empty()) {puts("0");return ;}
		int c=back(), la=1;
		printf("%o", c);
		for (int i = len() - 2; i >= 0; i --) printf("%.10o", v[i]); putchar('\n');
	}

	inline vector<int> toVector() {
		if (empty()) return vector<int>();
		vector<int> vp(1, 0), tp;
		int tmod=(int)1e9;
		for (int i=len()-1; i>=0; i--) {
			INT r=0;
			tp=vp; vp.clear(); vp.resize(tp.size(), 0);
			for (int j=0; j<tp.size(); j++) {
				r=(INT)tp[j]*BIGMOD+vp[j];
				vp[j]=r%tmod; r/=tmod;
				for (int k=j+1; r; k++) {
					if (k==vp.size()) vp.push_back(0);
					r+=vp[k];
					vp[k]=r%tmod; r/=tmod;
				}
			}
			r=v[i];
			for (int j=0; j<vp.size() && r; j++) {
				r+=vp[j]; vp[j]=r%tmod; r/=tmod;
			}
			if (r) vp.push_back(r);
		}
		return vp;
	}

	void print__by_10() {
		if (empty()) {puts("0");return ;}
		if (s__case==-1) putchar('-');
		vector<int> vp = toVector();
		int c=vp.back();
		printf("%d", c);
		for (int i=vp.size()-2; i>=0; i--) printf("%.9d", vp[i]);puts("");
	}

	string toString() {
		vector<int> vp = toVector();
		string STRN = "";
		for (int i = 0; i < vp.size(); i++) {
			for (int j = 0; j < 9; j ++) {
				STRN += vp[i] % 10 + '0';
				vp[i] /= 10;
			}
		}
		while (!STRN.empty() && STRN.back() == '0') STRN.pop_back();
		if (STRN.empty()) STRN = "0";
		return STRN;
	}

	int CTARGET_3(const BIG__INT &b) const {
		if (s__case != b.s__case) return s__case - b.s__case;
		if (s__case == -1) return -(-*this).CTARGET_3(-b);
		if (len() != b.len()) return len() - b.len();
		for (int i = len() - 1; i >= 0; i --)
			if (v[i] != b.v[i]) return v[i] - b.v[i];
		return 0;
	}

	bool operator < (const BIG__INT &b) const { return CTARGET_3(b) < 0; }
	bool operator <= (const BIG__INT &b) const { return CTARGET_3(b) <= 0; }
	bool operator == (const BIG__INT &b) const { return CTARGET_3(b) == 0; }
	bool operator != (const BIG__INT &b) const { return CTARGET_3(b) != 0; }
	bool operator > (const BIG__INT &b) const { return CTARGET_3(b) > 0; }
	bool operator >= (const BIG__INT &b) const { return CTARGET_3(b) >= 0; }

	BIG__INT operator - () const {
		BIG__INT r = (*this);
		r.s__case = -r.s__case;
		if (r.len()==0) r.s__case=1;
		return r;
	}

	BIG__INT operator + (const BIG__INT &b) const {
		if (s__case == -1) return -(-(*this) + (-b));
		if (b.s__case == -1) return (*this) - (-b);
		BIG__INT r;
		int nl = max(len(), b.len());
		r.resize(nl + 1);
		for (int i = 0; i < nl; i ++) {
			if (i < len()) r.v[i] += v[i];
			if (i < b.len()) r.v[i] += b.v[i];
			if (r.v[i] >= BIGMOD) {
				r.v[i+1]++, r.v[i]&=b__mod;
			}
		}
		r.n();
		return r;
	}

	BIG__INT operator - (const BIG__INT &b) const {
		if (s__case == -1) return -(-(*this) - (-b));
		if (b.s__case == -1) return (*this) + (-b);
		if ((*this) < b) return -(b - (*this));
		BIG__INT r;
		r.resize(len());
		for (int i = 0; i < len(); i ++) {
			r.v[i] += v[i];
			if (i < b.len()) r.v[i] -= b.v[i];
			if (r.v[i] < 0) {
				r.v[i] += BIGMOD ;
				r.v[i + 1] --;
			}
		}
		r.n();
		return r;
	}

	BIG__INT operator * (const BIG__INT &b) {
		BIG__INT r;
		r.resize(len() + b.len() + 1);
		r.s__case = s__case * b.s__case;
		INT c=0, up=0;
		for (int i=0; i<r.len(); i++) {
			c=up; up=0;
			for (int j=max(0, i-b.len()+1); j<len() && j<=i; j++) {
				c+=(INT)v[j]*b.v[i-j];
				if (c>=BIG__MOD_1) {
					up+=c>>BIG__LENGTH; c&=b__mod;
				}
			}
			up+=c>>BIG__LENGTH; c&=b__mod;
			r.v[i]=c;
		}
		r.n();
		return r;
	}

	BIG__INT operator / (const BIG__INT &b) {
		if (len()<b.len()) return 0;
		BIG__INT r;
		r.resize(max(1, len() - b.len() + 1));
		int oriS = s__case;
		BIG__INT b2 = b;
		BIG__INT a2 = *this, a3;
		a2.s__case = b2.s__case = r.s__case = 1;
		for (int i = r.len() - 1; i >= 0; i --) {
			INT d = 0, u = b__mod;
			a3=a2>>(i*30);
			if (a3.len()>b2.len()) {
				INT r=((INT)a3.back()<<BIG__LENGTH)+a3.v[a3.len()-2];
				u=r/b2.back()+1;
			} else if (a3.len()==b2.len() && b2.len()>1) {
				INT r=((INT)a3.back()<<BIG__LENGTH)+a3.v[a3.len()-2];
				u=r/(((INT)b2.back()<<BIG__LENGTH)+b2.v[b2.len()-2])+1;
			} else if (a3.len()==b2.len() && b2.len()==1) {
				u=a3.back()/b2.back()+1;
			}
			while (d < u) {
				INT m = (d + u + 1) >> 1;
				r.v[i] = m;
				if (((b2 * m)) > a3) u = m - 1;
				else d = m;
			}
			r.v[i] = d;
			a2=a2-((b2*d)<<i*30);
			a2.n();
		}
		s__case = oriS;
		r.s__case = s__case * b.s__case;
		r.n();
		return r;
	}

	BIG__INT operator % (const BIG__INT &b) {
		return (*this) - (*this) / b * b;
	}

	int len1() {
		return 32-__builtin_clz(back())+(len()-1)*30;
	}

	BIG__INT operator << (const int &u) {
		if (u==0) return *this;
		BIG__INT r;
		r.resize((len1()+u+29)/30);
		for (int V=u%30, i=r.len()-1, t=u/30; i>=t; i--) {
			r.v[i]=((i-t<len()?(INT)v[i-t]<<V:0)|(i-t?v[i-t-1]>>30-V:0))&b__mod;
		}
		r.n();
		return r;
	}

	BIG__INT operator >> (const int &u) {
		int MAXIMUM_NUMBER=len1();
		if (MAXIMUM_NUMBER<=u) return 0;
		BIG__INT r; r.resize((MAXIMUM_NUMBER-u+29)/30);
		for (int V=u%30, c=(1<<V)-1, i=u/30, j=0; j<r.len(); i++, j++) {
			r.v[j]=(v[i]>>V)|(i<len()-1?(v[i+1]&c)<<30-V:0);
		}
		r.n();
		return r;
	}
};

BIG__INT power[MAXIMUM_NUMBER][MAXIMUM_NUMBER], _FACTORIAL_[MAXIMUM_NUMBER];
vector<pair<BIG__INT, BIG__INT> > val[MAXIMUM_NUMBER];
int cnt[MAXIMUM_NUMBER];

int calculate_M_X_(int u, int _RESULTANT_, BIG__INT M_X_) {
	if (u == 0 && _RESULTANT_) return 0;
	if (u == 0) {
		if (M_X_ != 1) return 0;
		int s__case = 0;
		BIG__INT mul = 1;
		for (int i = 1; i <= 9; i++) {
			s__case = s__case + cnt[i];
			mul = mul * power[i][cnt[i]];
		}
		BIG__INT a = _FACTORIAL_[s__case];
        BIG__INT b = 1;
		for (int i = 1; i <= 9; i++) b = b * _FACTORIAL_[cnt[i]];
		val[s__case].push_back(make_pair(mul, a / b));
		return 0;
	}
	if (power[u][_RESULTANT_] < M_X_) return 0;
	for (int j = 0; j <= _RESULTANT_; j++) {
		cnt[u] = j;
		calculate_M_X_(u - 1, _RESULTANT_ - j, (M_X_ + power[u][j] - 1) / power[u][j]);
	}
    return 0;
}



BIG__INT _CALC_(BIG__INT M_X_, int id) {
	if (id) {
		auto iterator = lower_bound(ALL(val[id]), make_pair(M_X_, BIG__INT()));
		return iterator == val[id].end() ? 0 : iterator -> second;
	} else {
		return (M_X_ <= 1);
	}
}

BIG__INT GetSolution(BIG__INT n) {
	string STRN = n.toString();
	BIG__INT ans = 0;
	BIG__INT M_X_ = _FACTORIAL_[STRN.size()];
	for (int i = (int)STRN.size() - 1; i >= 0; i--) {
		for (int j = 1; j < STRN[i] - '0'; j++) {
			ans = ans + _CALC_((M_X_ + j - 1) / j, i);
		}
		if (STRN[i] != '0') {
			M_X_ = (M_X_ + STRN[i] - '1') / (STRN[i] - '0');
			continue;
		}
		M_X_ = 2; i = -1;
	}

	for (int i = 1; i < STRN.size(); i++) {
		ans = ans + _CALC_(_FACTORIAL_[i], i);
	}

	if (M_X_ == 1) ans = ans + 1;

	ans = min(n, ans);

	return ans;
}

bool _COMPARE_(pair<BIG__INT, BIG__INT> &a, const pair<BIG__INT, BIG__INT> &b) {
	if (a.first != b.first) return false;
	a.second = a.second + b.second;
	return true;
}

void mastercalc() {
	_FACTORIAL_[0] = 1;
	for (int i = 1; i < MAXIMUM_NUMBER; i++) {
		_FACTORIAL_[i] = _FACTORIAL_[i - 1] * i;
	}
	for (int i = 1; i < MAXIMUM_NUMBER; i++) power[i][0] = 1;
	for (int i = 1; i < MAXIMUM_NUMBER; i++) for (int j = 1; j < MAXIMUM_NUMBER; j++) {
		power[i][j] = power[i][j-1] * i;
	}
	for (int i = 1; i < MAXIMUM_NUMBER; i++) {
		calculate_M_X_(9, i, _FACTORIAL_[i] * (i >= 9) + (i < 9));
		sort(ALL(val[i]));
		val[i].erase(unique(ALL(val[i]), _COMPARE_), val[i].end());
		auto &a = val[i];
		for (int j = a.size() - 2; j >= 0; j--) {
			a[j].second = a[j].second + a[j+1].second;
		}
	}
}

int main() 
{
	int T;
	for (mastercalc(),cin >> T; T--; ) {
		
		BIG__INT N;
		N.input();
		GetSolution(N).print__by_10();
	}
	return 0;
}

