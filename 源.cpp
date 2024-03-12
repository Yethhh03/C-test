//#include<iostream>
//using namespace std;
//
//bool isRun(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int nian = 1970;
//	long long int Miao = 4294967295;
//	while (Miao > 0)
//	{
//		if (isRun(nian))
//		{
//			Miao -= 366 * 24 * 60 * 60;
//			nian++;
//		}
//		else
//		{
//			Miao -= 365 * 24 * 60 * 60;
//			nian++;
//		}
//		if (Miao < 0)
//		{
//			nian--;
//			break;
//		}
//	}
//	cout << nian << endl;
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//#include <cstdio>
//using namespace std;
//
//long long int Mol = 1000000007;
//
//long long int JieCheng(int n)
//{
//	long long int s = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	if (n >= m)
//	{
//		double test = (((JieCheng(n) % Mol) / (1.0 * (JieCheng(m) % Mol) * (JieCheng(n - m) % Mol))));
//		printf("%.0lf\n", test);
//	}
//	else
//	{
//		cout << 1 << endl;
//	}
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{ 
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, q;
//		cin >> n >> q;
//		unsigned short a[200005] = { 0 };
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//		}
//			while (q--)
//			{
//				int k;
//				cin >> k;
//				if (k == 1)
//				{
//					int l, r, x;
//					cin >> l >> r >> x;
//					for (int i = l; i <= r; i++)
//					{
//						a[i] += x;
//					}
//				}
//				if (k == 2)
//				{
//					int x, y, len;
//					cin >> x >> y >> len;
//					int flag = 0;
//					for (int i = 1; i <= len; i++)
//					{
//						if (a[x + i - 1] != a[y + i - 1])
//						{
//							flag = 1;
//							break;
//						}
//					}
//					if (flag == 0)
//					{
//						cout << "yes" << endl;
//					}
//					else
//					{
//						cout << "no" << endl;
//					}
//				}
//			}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,flag;
//	cin >> n;
//	long long int num[505];
//	while (n--)
//	{
//		int m;
//		cin >> m;
//		for (int i = 0; i < m; i++)
//		{
//			cin >> num[i];
//		}
//		double q = num[1] / num[0];
//		int j;
//		for (j = 2; j < m; j++)
//		{
//			if (num[j] / num[j - 1] != q)
//				break;
//		}
//		q = (int)q;
//		if (j == m)
//		{
//			cout << "Yes" << " " << q << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}




//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, t;
//	cin >> n;
//	for(int j = 1; j <= n; j++)
//	{
//		int sum = 0, flag = 0;
//		int a[10] = { 0 };
//		long long int m, num;
//		cin >> m;
//		if (m == 0)
//		{
//			cout << "Case #" << j << ": INSOMNIA" << endl;
//		}
//		else
//		{
//			for (int i = 1;i <= 1000000; i++)
//			{
//				num = m * i;
//				int num2 = num;
//				while (num)
//				{
//					t = num % 10;
//					num = num / 10;
//					if (a[t] == 0)
//					{
//						a[t] = 1;
//						sum++;
//					}
//					if (sum == 10)
//					{
//						cout << "Case #" << j << ": " << num2 << endl;
//						flag = 1;
//						break;
//					}
//				}
//				if (flag == 1)
//				{
//					break;
//				}
//			}
//			
//		}
//	}
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	long long int c;
//	cin >> c;
//	if (c >= 0)
//	{
//		cout << 4294967295 - c;
//	}
//	else
//	{
//		cout << 4294967295 + c + 2;
//	}
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct menu {
//	int c;
//	int p[1000];
//	int v[1000];
//};
//menu num[1000];
//int mmx[1000];
//
//int main()
//{
//	int n;//饭店数
//	int m;//能吃下多少道菜
//	cin >> n;
//	cin >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num[i].c;
//		for (int j = 0; j < num[i].c; j++)
//		{
//			cin >> num[i].p[j] >> num[i].v[j];
//		}
//	}
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int dp[1000];
//		memset(dp, 0, sizeof(dp));
//		for (int j = 0; j <= num[i].c; j++)
//		{
//			for (int k = m; k >= num[i].p[j]; k--)
//			{
//				dp[k] = max(dp[k], dp[k - num[i].p[j]] + num[i].v[j]);
//			}
//		}
//		mmx[i] = dp[m];
//	}
//	sort(mmx, mmx + i);
//	cout << mmx[i - 1] << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int num[355][355];
//	int num1[355][355];
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cin >> num[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		num1[n][i] = num[n][i];
//	}
//
//	for (int i = n - 1; i >= 1; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			num1[i][j] = max(num1[i + 1][j], num1[i + 1][j + 1]) + num[i][j];
//		}
//	}
//	cout << num1[1][1];
//
//}



//#include<stdio.h>
//#include<iostream>
//using namespace std;
//typedef int DataType;
//typedef struct
//{
//	DataType data[100];
//	int last;
//}SeqList;
//
//int PSort(SeqList* l)
//{
//    int i=0, n = 0;
//    int j;
//    while (l->data[i] == l->data[i + 1]&&i<l->last-1)
//    {
//        i++;
//    }
//    if (i == l->last-1)
//        return n;
//    else if (l->data[i] < l->data[i+1])
//    {
//        for (i = 1; i < l->last - 1; i++)
//        {
//            if (l->data[i] <= l->data[i + 1]);
//            else
//            {
//                n++;
//                break;
//            }
//
//        }
//    }
//    else
//    {
//        for (i = 1; i < l->last - 1; i++)
//        {
//            if (l->data[i] >= l->data[i + 1]);
//            else
//            {
//                n++;
//                break;
//            }
//
//        }
//    }
//    return n;
//
//}
//
//int main()
//{
//    int f;
//    int n,num,b;
//    
//    cin >> n;
//    SeqList a[105]= {0,0};
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        cin >> num;
//        int j = 0;
//        while(num--)
//        {
//            
//            cin >> b;
//            a[i].data[j++] = b;
//            a[i].last++;
//        }
//
//    }
//    
//
//    SeqList* l;
//    for (int i = 0; i < n; i++)
//    {
//        l = &a[i];
//        f = PSort(l);
//        if (f == 1)
//            printf("false\n");
//        else
//            printf("true\n");
//    }
//   
//    return 0;
//}

//#include <stdio.h>
//#include<iostream>
//#include <stdlib.h>
//using namespace std;
//#define MAXSIZE 100
//typedef int DataType;
//typedef struct {
//    DataType data[MAXSIZE];
//    int last;
//}SequenList;
//
//SequenList SLAdd(SequenList SL, DataType xinxi)
//{
//    
//    SL.data[SL.last++] = xinxi;
//    return SL;
//}
//
//SequenList InsertVal(int x, SequenList l)
//{
//    int i, j;
//    for (i = 0; i < l.last; i++)
//    {
//        if (x > l.data[i]&&(i!=l.last-1))
//            ;
//        else if (x<l.data[i])
//        {
//            for (j = l.last - 1; j >= i; j--)
//            {
//                l.data[j + 1] = l.data[j];
//            }
//            l.data[i] = x;
//            break;
//        }
//        else 
//        {
//            l.data[l.last] = x;
//        }
//    }
//    l.last++;
//    return l;
//}
//
//int main()
//{
//    SequenList l= {0};
//    int x,num;
//    cin >> x;
//    int i = 0;
//    int m;
//    cin >> m;
//
//    while (m--)
//    {
//        cin >> num;
//        l=SLAdd(l, num);
//    }
//
//    l=InsertVal(x, l);
//
//    for (i = 0; i < l.last; i++)
//    {
//        cout << l.data[i] << " ";
//    }
//    return 0;
//
//





//#include<stdio.h>
//#include<iostream>
//using namespace std;
//
//int rob(int num[], int length) {
//    int dp[10000];
//    for (int m = 0; m < length; m++)
//    {
//        dp[m] = num[m];
//    }
//
//    int i = 0;
//    
//    if (length == 0) 
//        return 0;
//    if (length == 1) 
//        return num[0];
//    if (length == 2) 
//        return max(num[0], num[1]);
//    else
//    {
//
//        dp[0] = num[0];
//        dp[1] = max(num[0], num[1]);
//
//        for (i = 2; i < length; i++)
//        {
//            dp[i] = max(dp[i - 2] + num[i], dp[i - 1]);
//        }
//
//        int m1 = dp[length - 2];//因为是环，分两部分
//
//        dp[1] = num[1];
//        dp[2] = max(num[1], num[2]);
//
//        for (i = 3; i < length; i++)
//        {
//            dp[i] = max(dp[i - 2] + num[i], dp[i - 1]);
//        }
//        int m2 = dp[length - 1];//分两部分
//
//        return max(m1, m2);
//    }
//
//    return 0;
//
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a[10000];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//    cout << rob(a, n);
//	
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int num[40];
//	num[0] = 0, num[1] = 1, num[2] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		num[i] = num[i - 1] + num[i - 2] + num[i - 3];
//
//	}
//	cout << num[n];
//
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//
//int sob(int dp[][3], int num[][3],  int n)
//{
//
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (j == 0)
//			{
//				dp[i][j] = min(num[i][j] + dp[i - 1][j + 1], num[i][j] + dp[i - 1][j + 2]);
//			}
//			if (j == 1)
//			{
//				dp[i][j] = min(num[i][j] + dp[i - 1][j - 1], num[i][j] + dp[i - 1][j + 1]);
//			}
//			if (j == 2)
//			{
//				dp[i][j] = min(num[i][j] + dp[i - 1][j - 1], num[i][j] + dp[i - 1][j - 2]);
//			}
//
//		}
//	}
//	return min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2]));
//
//}
//
//
//
//int main()
//{
//	int n;
//	int num[101][3];
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> num[i][j];
//		}
//	}
//	int dp[101][3];
//	dp[0][0] = num[0][0], dp[0][1] = num[0][1], dp[0][2] = num[0][2];
//	
//	cout << sob(dp, num, n);
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,m;
//	cin >> n;
//	while (n--)
//	{
//		cin >> m;
//		int dp[1000][2];
//		for (int i = 1; i < m; i++)
//		{
//			for (int j = 0; j < 2; j++)
//			{
//				if (j == 0)
//				{
//					dp[i][j] = max(dp[i - 1][0], dp[i - 1][1]) + 1;
//
//				}
//				
//			}
//		}
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	long long int n,a,b,ta;
//	
//	cin >> n;
//	while (n--)
//	{
//		int flag = 0;
//		cin >> a >> b >> ta;
//		long long int num = a + b;
//		long long int sum = 0;
//
//		if (a == ta || b == ta)
//		{
//			flag = 1;
//			cout << 0 << endl;
//		}
//
//		if (flag == 0 && (ta % 2 == 1))
//		{
//			flag = 1;
//			cout << -1 << endl;
//		}
//		while (flag == 0)
//		{
//			sum++;
//			num *= 2;
//			if (ta <= num)
//			{
//				flag = 1;
//				cout << sum << endl;
//			}
//		}
//	}
//	return 0;
//}
//



//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int a[10];
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include<iostream>
//using namespace std;
//#define MAX 100
//typedef int DataType;
//typedef struct node
//{
//	DataType data[MAX];
//	int top;
//}SeqStack;
////置空栈
//void InitStack(SeqStack* s)
//{
//	s->top = -1;
//}
////入栈
//int Push(SeqStack* s, DataType x)
//{
//	if (s->top >= MAX - 1)
//	{
//		printf("overflow\n");
//		return 0;
//	}
//	s->top++;
//	s->data[s->top] = x;
//	return 1;
//}
//void Print(SeqStack* s)//输出
//{
//	while (s->top >= 0)
//	{
//		printf("%d", s->data[s->top]);
//		s->top--;
//	}
//	cout << endl;
//}
//DataType Counter(int m, int n)//二进制转化
//{
//	SeqStack* p, p1;
//	p = &p1;
//	DataType x = 0;
//	p->top = -1;
//	while ((m * 1.0) / n)
//	{
//		x = m % n;
//		Push(p, x);
//		m = m / n;
//	}
//	Print(p);
//	return 0;
//}
//int main()
//{
//	int a;
//	int n, m;
//	cin >> a;
//	while (a--)
//	{
//		cin >> m;
//		cin >> n;
//		Counter(m, n);
//
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include<iostream>
//using namespace std;
//
//#define MAX 100
//typedef char DataType;//栈的结构体的定义
//typedef struct
//{
//	DataType data[MAX];
//	int top;
//}SeqStack;
//typedef struct node//列表结构体的定义
//{
//	DataType data;
//	struct node* next;
//}LinkList;
//LinkList* CreatRear()//创建列表并输入值。
//{
//	char ch;
//	LinkList* head, * s, * r;
//	head = (LinkList*)malloc(sizeof(LinkList));
//	head->next = NULL;
//	r = head;
//	ch = getchar();
//	while (ch != '$')
//	{
//		s = (LinkList*)malloc(sizeof(LinkList));
//		s->data = ch;
//		if (head->next == NULL)
//			head->next = s;
//		else
//			r->next = s;
//		r = s;
//		ch = getchar();
//	}
//	r->next = NULL;
//	return head;
//}
//int Push(SeqStack* s, DataType x)//压入栈
//{
//	if (s->top >= MAX - 1)
//	{
//		printf("overflow\n");
//		return 0;
//	}
//	s->top++;
//	s->data[s->top] = x;
//	return 1;
//}
//int Counter(LinkList* head)
//{
//	SeqStack* p, p1;
//	LinkList* r = head->next;
//	p = &p1;//要有初始值赋值。
//	p->top = -1;//top也要有初始值赋值。
//	int f = 1;
//	while (r)
//	{
//		Push(p, r->data);
//		r = r->next;
//	}
//	r = head->next;
//	while (r)
//	{
//		if (r->data == p->data[p->top])
//		{
//			r = r->next;
//			p->top--;//从栈顶到栈底要--才能到达
//		}
//		else
//		{
//			f = 0;
//			break;
//		}
//	}
//	return f;
//}
//int main()
//{
//	int f;
//	LinkList* s;
//	s = CreatRear();
//	f = Counter(s);
//	if (f == 1)//进行判断的标志。
//		printf("true");
//	else
//		printf("false");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//    int lengthOfLongestSubstring(string s)
//    {
//        if (s == "")		// 空 直接返回
//            return 0;
//
//        int s_index(0);          // 用于索引 s
//        int count(0);          // 最长无重复子串的长度
//
//         + 50  多开辟点内存，防止不够
//        int* queArr(new int[s.length() + 50]);     // 队列思想
//        int head(0);
//        int tail(0);
//
//        queArr[head] = s[s_index++];      // 将第一个字符放入队列之中
//        ++tail;            // 指向尾部
//        ++count;           // 初始最大无重复子串长度为 1
//
//        while (head < tail && tail < s.length() && s_index < s.length())
//        {
//            int flag(0);
//
//             遍历队列中的元素 判断是否相等
//            for (int i = head; i < tail; i++)
//            {
//                if (queArr[i] == s[s_index])
//                {
//                    queArr[tail++] = s[s_index++];
//                    head = i + 1;       // 核心部分
//
//                    flag = 1;
//                    break;
//                }
//            }
//
//            if (flag) continue;
//
//            queArr[tail++] = s[s_index++];     // 没有重复 入队 
//            count = max(count, tail - head);    // 计算当前子串的大小
//        }
//
//        return count;
//    }
//    int main()
//    {
//        string s;
//        cin >> s;
//        cout << lengthOfLongestSubstring(s);
//    }
//
//



//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf_s("%d,%d", &a, &b);
//	
//	if (a > b)
//		printf("max=%d\n", a);
//	else
//		printf("max=%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[105],n,sum=2;
//	a[1] = 1;
//	a[2] = 1;
//	scanf_s("%d", &n);
//	if (n == 1)
//		printf("1");
//	else if (n == 2)
//	{
//		printf("2");
//	}
//	else
//	{
//		for (int i = 3; i <= n; i++)
//		{
//			a[i] = a[i - 1] + a[i - 2];
//			sum += a[i];
//		}
//		printf("%d", sum);
//	}
//}


//#include<stdio.h>
//int main()
//{
//	long long int sum=1;
//	int n;
//	int a[31] = { 0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0 };
//	scanf_s("%d", &n);
//	for (int i = 2; i <= n; i++)
//	{
//		if (a[i] == 1)
//		{
//			sum *= i;
//		}
//	}
//	printf("%d", sum);
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a, b, c;//a=3,b=3,c=6;
//	for (int a = 0; a <= 3; a++)
//	{
//		for (int b = 0; b <= 3; b++)
//		{
//			c = n - a - b;
//			if (c >= 0 && c <= 6)
//			{
//				cout << a << " " << b << " " << c << endl;
//			}
//		}
//	}
//}


//#include<stdio.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i=0;
//	int a[8];
//
//	cin >> n;
//	while (n % 10)
//	{
//		a[i] = n % 10;
//		n = n / 10;
//		i++;
//	}
//	cout << i << endl;
//	for (i=i-1; i >= 0; i--)
//	{
//		cout << a[i] << " ";
//	}
//}


//#include<iostream>
//using namespace std;
//int leap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year, n;
//	int sum = 0;
//	cin >> year >> n;
//	for (year=year+1;sum<n; year++)
//	{
//		if (leap(year))
//		{
//			sum++;
//		}
//	}
//	cout << --year << endl;
//
//}

//#include<iostream>
//using namespace std;
//int fun1(int m, int n)
//{
//	while (m != n)
//	{
//		if (m > n)
//		{
//			m -= n;
//		}
//		if (n > m)
//		{
//			n -= m;
//		}
//	}
//	return m;
//}
//int fun2(int m, int n)
//{
//    int i;
//    for (i = 1;; i++)
//    {
//        if (m * i % n == 0)
//        {
//            break;
//        }
//    }
//    return m * i;
//
//}
//int main()
//{
//	int m, n;
//
//	cin >> m >> n;
//	cout << fun1(m,n) << " " << fun2(m, n) ;
//}


//#include<stdio.h>
//int max(int a, int b)
//{
//    int i;
//    for (i = 1;; i++)
//        if (a * i % b == 0)
//            break;
//    return a * i;
//}
//int min(int a, int b)
//{
//    int x, y;
//    if (a > b)
//        x = b;
//    else
//        x = a;
//    for (x; x >= 1; x--)
//        if (a % x == 0 && b % x == 0)
//            break;
//    return x;
//}
//int main()
//{
//    int a, b;
//    scanf_s("%d%d", &a, &b);
//    printf("%d %d", min(a, b), max(a, b));
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int sum = n * (4 + 3 * (n - 1)) / 2;
//	cout << sum;
//}

//#include<stdio.h>
//#include<iostream>
//#define pi 3.1415926
//using namespace std;
//int main()
//{
//	int r;
//	for (r = 1; r <= 10; r++)
//	{
//		float area = pi * r * r;
//		if(area>=40&&area<=90)
//		{
//			printf("r=%d area=%.2f\n",r, area);
//		}
//	}
//
//}

//#include<iostream>
//#include <stdio.h>
//using namespace std;
//int main() {
//	int n, i;
//	cin >> n;
//	for (i = 2; i <= n; i++) {
//		while (n % i == 0) {
//			n /= i;
//			if (n != 1) {
//				cout << i << " ";
//			}
//			else {
//				cout << i << " ";
//				break;
//			}
//		}
//	}
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	string a;
//	cin >> a;
//	for (int i = 0; i < a.length(); i++)
//	{
//		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
//		{
//			cout << a[i];
//
//		}
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10];
//	int flag=0;
//	for (int j = 0; j < 9; j++)
//	{
//		cin >> a[j];
//	}
//	int t;
//	cin >> t;
//	int x = 0, y = 1;
//	if (a[0] < a[1])
//	{
//		flag = 1;
//	}
//	else
//		if (a[0] == a[1])
//	{
//		while (a[x] == a[y])
//		{
//			x++;
//			y++;
//		}
//		if (a[x] < a[y])
//		{
//			flag = 1;
//
//		}
//
//	}
//	if (flag == 1)
//	{
//		int i;
//		for (i = 0; i < 9; i++)
//		{
//			if (t > a[i])
//			{
//				cout << a[i] << endl;
//			}
//			else
//			{
//				cout << t << endl;
//				break;
//			}
//			if (i == 8)
//			{
//				cout << t << endl;
//			}
//		}
//		for (i; i < 9; i++)
//		{
//			cout << a[i] << endl;
//		}
//
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < 9; i++)
//		{
//			if (t < a[i])
//			{
//				cout << a[i] << endl;
//			}
//			else
//			{
//				cout << t << endl;
//				break;
//			}
//			if (i == 8)
//			{
//				cout << t << endl;
//			}
//		}
//		for (i; i < 9; i++)
//		{
//			cout << a[i] << endl;
//		}
//
//	}
//	
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int a, b, c, d;
//	cin >> n;
//	a = n % 10  ;
//	n = n / 10;
//	b = n % 10 ;
//	n = n / 10;
//	c = n % 10 ;
//	n = n / 10;
//	d = n % 10 ;
//	n = n / 10;
//	cout << d + c + b + a << endl;
//}

//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int n;
//	int flag = 0;
//	cin >> n;
//	if (n == 2)
//	{
//		cout << "prime";
//	}
//	else
//	{
//		for (int i = 2; i <= sqrt(n); i++)
//		{
//			if (n % i == 0)
//			{
//				cout << "not prime";
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			cout << "prime";
//		}
//		
//	}
//}

//1045



//#include<iostream>
//using namespace std;
//void shuru(int a[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//
//}
//void chuli(int a[10])
//{
//	int min;
//	int max;
//	int f1=0, f2=0;
//	min = a[0];
//	max = a[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (a[i] < min)
//		{
//			min = a[i];
//			f1 = i;
//		}
//	}
//	for (int i = 1; i < 10; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//			f2 = i;
//		}
//	}
//	if (max == a[0] && min == a[9])
//	{
//		int num2 = a[0];
//		a[0] = a[9];
//		a[9] = num2;
//	}
//	else
//	{
//		int num = a[0];
//		a[0] = a[f1];
//		a[f1] = num;
//		int num1 = a[9];
//		a[9] = a[f2];
//		a[f2] = num1;
//
//	}
//}
//void shuchu(int a[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//int main()
//{
//	int a[10];
//	shuru(a);
//	chuli(a);
//	shuchu(a);
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a, b, c;
//	a = n % 10;
//	b = n / 10 % 10;
//	c = n / 100;
//	if (n == a * a * a + b * b * b + c * c * c)
//	{
//		cout << "1" << endl;
//	}
//	else
//	{
//		cout << "0" << endl;
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << 1993 << endl;
//	//int a, b, c;
//	//for (int i = 100; i < 1000; i++)
//	//{
//	//	a = i % 10;
//	//	b = i / 10 % 10;
//	//	c = i / 100; 
//	//	if (i == a * a * a + b * b * b + c * c * c)
//	//	{
//	//		cout << i << endl;
//
//	//	}
//	//}
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "(" << 220 << "," << 284 << ")" << "(" << 1184 << "," << 1210 << ")" << "(" << 2620 << "," << 2924 << ")";
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[15] = {1,3,7,9,11,13,17,19,21,23,27,29,33,37,39};
//	for (int i = 0; i < 15; i++)
//	{
//		cout << a[i] << "/" << 40 << ",";
//	}
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str;
//	cin >> str;
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			str[i] += 32;
//		}
//	}
//	cout << str << endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c, d, e, f;
//	for (a = 1; a < 2; a++)
//	{
//		for (b = 0; b < 2; b++)
//		{
//			if (a + b >= 1)
//			{
//				c = b;
//				if (a == 1)
//				{
//					d = 0;
//					e = 0;
//					f = 1;
//				}
//
//				if (c + d == 1)
//				{
//					if (a == 1)
//					{
//						cout << "A,";
//					}
//					if (b == 1)
//					{
//						cout << "B,";
//					}
//					if (c == 1)
//					{
//						cout << "C,";
//					}
//					if (d == 1)
//					{
//						cout << "D,";
//					}
//					if (e == 1)
//					{
//						cout << "E,";
//					}
//					if (f == 1)
//					{
//						cout << "F,";
//					}
//				}
//			}
//		}
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] >= 1 && a[i] <= 5)
//		{
//			printf("A\n");
//		}
//		else
//		{
//			printf("B\n");
//		}
//	}
//
//}
//
//#include<stdio.h>
//int main()
//{
//	int a[10]={1,4,3,6,5,7,8,9,0};
//	int min = a[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (a[i] > min)
//		{
//			min = a[i];
//		}
//	}
//	printf("%d\n", min);
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	long long int num;
//	char name[10], hob[10];
//	char a;
//
//	scanf_s("%d", &num);
//	scanf_s("%c", &a);
//	gets_s(name);
//
//	gets_s(hob);
//	
//	printf("%d\n", num);
//	puts(name);
//	puts(hob);
//	return 0;
//}

//#include<stdio.h>
//int getmax(int a, int b, int c)
//{
//	int t = 0;
//	if (a > t)
//	{
//		t = a;
//	}
//	if (b > t)
//	{
//		t = b;
//	}
//	if (c > t)
//	{
//		t = c;
//	}
//	printf("%d", t);
//	return t;
//
//}
//int  main()
//{
//	int getmax(int a, int b, int c);
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	getmax(a, b, c);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//	int sum = 0;
//	for (int i = x; i <= y; i++)
//	{
//		if (i % 3 == 1 && i % 5 == 3)
//		{
//			sum += i;
//		}
//	}
//	cout << sum << endl;
//}


//#include<iostream>
//using namespace std;
//int main()
//	cout << "tengguowen" << endl;
//	
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[8];
//	for(int i = 0; i < 8; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = i+1; j < 8; j++)
//		{
//			if (a[i] > a[j])
//			{
//				int t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		cout << a[i]<<" ";
//	}
//
//}


//#include<stdio.h>
//int fun(int m, int n)
//{
//    int i, k;
//    for (i = 1; i < m + n; i++)
//    {
//        if (m % i == 0 && n % i == 0)
//        {
//            if (m % i >= 0 && n % i >= 0)
//                k = i;
//            else break;
//        }
//    }
//    return k;
//}
//int fun1(int m, int n)
//{
//    fun(m, n);
//    int r;
//    r = m * n / (fun(m, n));
//    return r;
//}
//
//void main()
//{
//    int m, n;
//    scanf("%d%d", &m, &n);
//    printf("%d %d", fun(m, n), fun1(m, n));
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string a;
//	string b;
//	cin >> a;
//	cin >> b;
//	cout << a << b << endl;
//
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int t = a;
//	a = b;
//	b = t;
//	cout << a << " " << b;
//	
//}


//#include<stdio.h>
//#define M(a,b) a%b
//
//int main()
//{
//	int a, b;
//	scanf_s("%d%d", &a, &b);
//	printf("%d", M(a, b));
//}

//#include<stdio.h>
//#include<math.h>
//#define S(a,b,c) (a+b+c)/2
//#define area(a,b,c,S) sqrt(S*(S-a)*(S-b)*(S-c))
//
//int main()
//{
//	float a, b, c;
//	scanf_s("%f%f%f", &a, &b, &c);
//	printf("%.3f", area(a, b, c, S(a, b, c)));
//}

//#include<stdio.h>
//#define LEAPYEAR(y) ((y % 4 == 0 && y % 100 != 0) ||  y% 400 == 0) ? 1 : 0
//int main()
//{
//	int y;
//	scanf_s("%d", &y);
//	if (LEAPYEAR(y) == 1)
//	{
//		printf("L");
//	}
//	else
//	{
//		printf("N");
//	}
//}


//#include<stdio.h>
//
//int main()
//{
//	float a;
//	scanf_s("%f", &a);
//	for (int i = 1; i <= 3; i++)
//	{
//		int j = i;
//		for (; j > 0; j--)
//		{
//			printf("%6.2f", a);
//			printf(" ");
//		}
//		printf("\n");
//	}
//
//}


//#include<stdio.h>
//#define max(a,b,c) ((a>b)?a:b)>c?((a>b)?a:b):c
//
//float getmax(float a, float b, float c)
//{
//	float t = a;
//	if (b > t)
//	{
//		t = b;
//	}
//	if (c > t)
//	{
//		t = c;
//	}
//	return t;
//}
//int  main()
//{
//	float a, b, c;
//	scanf_s("%f%f%f", &a, &b, &c);
//	printf("%.3f\n%.3f\n", getmax(a, b, c), max(a, b, c));
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[3];
//	cin >> a[0] >> a[1] >> a[2];
//	if (a[0] > a[1])
//	{
//		int t = a[0];
//		a[0] = a[1];
//		a[1] = t;
//	}
//
//	if (a[1] > a[2])
//	{
//		int t = a[1];
//		a[1] = a[2];
//		a[2] = t;
//
//	}
//	if (a[0] > a[1])
//	{
//		int t = a[0];
//		a[0] = a[1];
//		a[1] = t;
//	}
//	
//	cout << a[0] << " " << a[1] << " " << a[2] << " ";
//}

//#include<stdio.h>
//int main()
//{
//	int year, month, day;
//	scanf_s("%d%d%d", &year, &month, &day);
//	int sum = 0;
//	switch (month - 1)
//	{
//	case 11:sum += 30;
//	case 10:sum += 31;
//	case 9:sum += 30;
//	case 8:sum += 31;
//	case 7:sum += 31;
//	case 6:sum += 30;
//	case 5:sum += 31;
//	case 4:sum += 30;
//	case 3:sum += 31;
//	case 2:sum += 28;
//	case 1:sum += 31;
//	}
//	sum += day;
//	if (month > 2)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			sum++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int m, n;
//	int flag;
//	cin >> m >> n;
//	if (m > n)
//	{
//		int t = m;
//		m = n;
//		n = t;
//	}
//	if (m == 1)
//	{
//		m++;
//	}
//	for (int i = m ; i <= n; i ++)
//	{
//		flag = 0;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			cout << i << endl;
//		}
//	}
//}


//#include<stdio.h>
//
//void fun(int *a)
//{
//	*a = 2;
//}
//
//void main()
//{
//	int m = 1;
//	fun(&m);
//	printf("m=%d\n", m);
//
//}

//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int a = 2; a <= n; a++)
//	{
//		for (int b = 2; b < a; b++)
//		{
//			for (int c = b; c < a; c++)
//			{
//				for (int d = c; d < a; d++)
//				{
//					if (a * a * a == b * b * b + c * c * c + d * d * d)
//					{
//						printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
//					}
//				}
//			}
//		}
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	long long int c;
//	cin >> c;
//	if (c >= 0)
//	{
//		cout << 4294967295 - c;
//	}
//	else
//		cout << 4294967295 + c + 2;
//}


//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int n;//带转换的数
//	int a, b;//进制数
//	
//	
//	while (scanf_s("%d%d%d", &n, &a, &b) != EOF)
//	{
//		int y = 0;
//		int p = 1;
//		while (n != 0)
//		{
//			y = y + (n % 10) * p;
//			n = n / 10;
//			p = p * a;
//		}
//		int a[10000];
//		int count = 0;
//		do {
//			a[count++] = y % b;
//			y = y / b;
//		} while (y != 0);//当商不为0时进行循环 
//
//		for (int i = count - 1; i >= 0; i--) {
//			printf("%d", a[i]);
//		}
//		cout << endl;
//	}
//
//}


//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	scanf_s("%d", &line);
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		// *
//		for (j = 0; j < 2 * i + 1; j+=2)
//		{
//			printf("*");
//			printf(" ");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//
//		// *
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j+=2)
//		{
//			printf("*");
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	float s;
//	cin >> s;
//	if (s >= 90 && s <= 100)
//	{
//		cout << "A" << endl;
//	}
//	else if (s >= 80 && s < 90)
//	{
//		cout << "B" << endl;
//	}
//	else if (s >= 70 && s < 80)
//	{
//		cout << "C" << endl;
//	}
//	else if (s >= 60 && s < 70)
//	{
//		cout << "D" << endl;
//	}
//	else if (s < 60)
//	{
//		cout << "E" << endl;
//	}
//	else
//	{
//		cout << "Input error!" << endl;
//	}
//}


//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	float PI = 3.14159;
//	float r;
//	cin >> r;
//	printf("%.3f\n%.3f\n", 2 * PI * r, PI * r * r);
//	
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	for (int i = 2000; i <= 2035; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			cout << i << " ";
//		}
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	float sum = 1;
//	int p = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		p *= i;
//		sum += 1.0 / p;
//	}
//	printf("%.6f", sum);  
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[5][4];
//	for (int i = 1; i < 5; i++)
//	{
//		for (int j = 1; j < 4; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	int max = a[1][1];
//	int x = 0, y = 0;
//	for (int i = 1; i < 5; i++)
//	{
//		for (int j = 1; j < 4; j++)
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//	cout << x << " " << y << endl;
//	cout << max;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a,b,c;
//	a = n % 10;
//	b = n / 10 % 10;
//	c = n / 100;
//	if (n == a * a * a + b * b * b + c * c * c)
//	{
//		cout << "1" << endl;
//	}
//	else
//	{
//		cout << "0" << endl;
//	}
//
//}

//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	float sum = 100;
//	float p = 100;
//	for (int i = 1; i < n; i++)
//	{
//		p /= 2.0;
//		sum += 2 * p;
//	}
//	printf("%.4f", sum);
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int sum = 0;
//	for (int i = 1; i <= n/5; i++)
//	{
//		for (int j = 1; j <= n/2; j++)
//		{
//			for (int k = 1; k <= n; k++)
//			{
//				if (i * 5 + j * 2 + k * 1 == n)
//				{
//					sum++;
//				}
//
//			}
//		}
//	}
//	cout << sum;
//
//}


//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int n, a, m, x, h, S, Sn;
//	scanf_s("%d%d", &a, &n);
//	int num = 1;
//	m = 0;
//	h = 0;
//	S = 0;
//	while (m < n)
//	{
//		x = pow(10, m);
//		h = h + x;
//		S += h;
//		m++;
//	}
//	Sn = a * S;
//	for (int i = 0; i < n; i++)
//	{
//		for (int i = 0; i < num; i++)
//		{
//			printf("%d", a);
//
//		}
//		if (num < n)
//		{
//			num++;
//			printf("+");
//		}
//
//	}
//	printf("=%d", Sn);
//	return 0;
//}


//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	char a[100];
//	gets_s(a);
//	int i, j;
//	for (i = 0, j = strlen(a) - 1; i != j; i++, j--)
//	{
//		if (a[i] >= 65 && a[i] <= 90)
//		{
//			a[i] += 32;
//		}
//		if (a[j] >= 65 && a[j] <= 90)
//		{
//			a[j] += 32;
//		}
//		if (a[i] != a[j])
//		{
//			cout << "NO" << endl;
//			break;
//		}
//	}
//	if (i == j)
//	{
//		cout << "YES" << endl;
//
//	}
//	return 0;
//}


 /*#include <iostream>
 #include <string>
 #include <stdio.h>
 using namespace std;
 int main()
 {
	     string str;
	     cin >> str;
	     int len = str.length();
	     const char* p = str.c_str();
	     int n = 0;
	     for (int i = 0; i < len / 2; i++)
		     {
		         if (p[i] == p[len - 1 - i])
			         {
			             continue;
			         }
		         else { n = 1; break; }
		     }
	     if (n == 1) 
		 { cout << "YES" << endl; }
	     else 
		 { cout << "NO" << endl; }
 }*/


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10000];
//	a[1] = 2;
//	a[2] = 2;
//	int n;
//	cin >> n;
//	for (int i = 3; i <= n; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	cout << a[n] << endl;
//}


//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a[1000];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (abs(a[i]) > abs(a[j]))
//			{
//				int t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int a[1000];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+1; j < m; j++)
//		{
//			if (a[j] < a[i])
//			{
//				int t = a[j];
//				a[j] = a[i];
//				a[i] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int year, month, day;
//	scanf_s("%d%d%d", &year, &month, &day);
//	if (year > 2020)
//	{
//		int sum = 0;
//		switch (month - 1)
//		{
//		case 11:sum += 30;
//		case 10:sum += 31;
//		case 9:sum += 30;
//		case 8:sum += 31;
//		case 7:sum += 31;
//		case 6:sum += 30;
//		case 5:sum += 31;
//		case 4:sum += 30;
//		case 3:sum += 31;
//		case 2:sum += 28;
//		case 1:sum += 31;
//		}
//		sum += day;
//		if (month > 2)
//		{
//			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//				sum++;
//		}
//		sum += 149;
//
//		cout << sum % 7+1 << endl;
//	}
//	else if (year == 2020)
//	{
//		if (month > 4)
//		{
//			int sum = 0;
//			switch (month - 1)
//			{
//			case 11:sum += 30;
//			case 10:sum += 31;
//			case 9:sum += 30;
//			case 8:sum += 31;
//			case 7:sum += 31;
//			case 6:sum += 30;
//			case 5:sum += 31;
//			case 4:sum += 30;
//			case 3:sum += 31;
//			case 2:sum += 28;
//			case 1:sum += 31;
//			}
//			sum += day;
//			sum++;
//			sum -= 112;
//			sum -= 5;
//			cout << sum % 7+1 << endl;
//		}
//		else if (month == 4)
//		{
//			int sum = 0;
//			if (day > 21)
//			{
//				sum = day - 21;
//				if (sum > 5)
//				{
//					cout << (sum - 5) % 7+1 << endl;
//				}
//				if (sum == 5)
//				{
//					cout << "7" << endl;
//				}
//				if (sum < 5)
//				{
//					cout << 2 + sum << endl;
//				}
//			}
//			if (day <= 21)
//			{
//				int sum = 21 - day;
//				if (sum > 2)
//				{
//					cout << sum - 2;
//				}
//
//			}
//		}
//	}
//
//	
//}


//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int n;
//	int a[1005];
//	int b[1005];
//	for (int i = 0; i <= 1000; i++)
//	{
//		a[i] = 1;
//	}
//	a[1] = 0;
//	for (int i = 4; i <= 1000; i++)
//	{
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				a[i] = 0;
//				break;
//			}
//		}
//	}
//	cout << "1" << "=" << "1" << endl;
//	for (int i = 2; i <= 1000; i++)
//	{
//		int sum = 1;
//		int k = 0;
//		if (a[i] == 0)
//		{
//			for (int j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					sum += j;
//					sum += i / j;
//					b[k++] = j;
//					b[k++] = i / j;
//				}
//			}
//		}
//		if (sum == i)
//		{
//			cout << i << "=" << "1" << "+";
//			for (int m = 0; m < k; m+=2)
//			{
//				cout << b[m] << "+";
//			}
//			for (int m = k-1; m >0; m -= 2)
//			{
//				if (m != 1)
//				{
//					cout << b[m] << "+";
//
//				}
//				else
//				{
//					cout << b[m] << endl;
//				}
//			}
//		}
//	}
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float x, y;
//	cin >> x;
//	if (x < 1)
//		printf("%.2f", x);
//	else if (x >= 1 && x < 10)
//		printf("%.2f", y = 2 * x - 1);
//	else
//		printf("%.2f", y = 3 * x - 11);
//	return 0;
//
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	for (int i = 42; i <= 1000; i+=42)
//	{
//		if (i % 2 == 0 && i % 3 == 0 && i % 7 == 0)
//		{
//			cout << i << endl;
//		}
//	}
//
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int sum = 0;
//	float summ = 0;
//	float av;
//	int c=0;
//	for (int i = 0; i < 20; i++)
//	{
//		cin >> n;
//		if (n < 0)
//			sum++;
//		else
//		{
//			summ += n;
//			c++;
//		}
//
//	}
//	printf("%d\n%.2f\n", sum, summ / c);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n - i; j++)
//			printf(" ");
//
//		for (int k = 1; k <= 2 * i - 1; k++)
//			printf("*");
//
//		printf("\n");
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	char n;
//	int a = 0, b = 0, c = 0, d = 0;
//	while ((n = getchar()) != '\n')
//	{
//		if (n >= 'a' && n <= 'z' || n >= 'A' && n <= 'Z')
//			a++;
//		else if (n >= '0' && n <= '9')
//			b++;
//		else if (n == ' ')
//			c++;
//		else
//			d++;
//	}
//	cout << a << endl << b << endl << c << endl << d << endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = i + 1; j < 10; j++)
//		{
//			if (a[j] > a[i])
//			{
//				int t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	char a[100];
//	int j = 0;
//	gets_s(a);
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		cout << a[i];
//		j++;
//	}
//	for (int i = j - 1; i >= 0; i--)
//	{
//		cout << a[i];
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[45];
//	int n;
//	cin >> n;
//	a[1] = 1;
//	a[2] = 1;
//	if (n == 1)
//	{
//		cout << "1" << endl;
//	}
//	else if (n == 2)
//	{
//		cout << "1" << " " << "1" << endl;
//	}
//	else
//	{
//		cout << "1" << " " << "1" <<" ";
//		for (int i = 3; i <= n; i++)
//		{
//			a[i] = a[i - 1] + a[i - 2];
//			cout << a[i] << " ";
//		}
//	}
//			
//}


//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	int sum = 0;
//	string a;
//	cin >> a;
//	for (int i = 0; i < a.length(); i++)
//	{
//		if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
//		{
//			sum++;
//		}
//	}
//	cout << sum;
//
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int max;
//	int n;
//	cin >> n;
//	max = n;
//	do
//	{
//		if (n > max)
//		{
//			max = n;
//		}
//		cin >> n;
//	} while (n != -1);
//	cout << max << endl;
//	
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	long long int sum=0;
//	long long int m=1;
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		m *= i;
//		sum += m;
//	}
//	cout << sum;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	cout << 10 + 2 * (n - 1);
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int a[100][100];
//	int sum = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j || (i + j) == n + 1)
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	cout << sum << endl;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a[10000];
//	for (int i = 2; i <= n; i++)
//	{
//		a[i] = 1;
//	}
//	for (int i = 3; i <= n; i++)
//	{
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				a[i] = 0;
//				break;
//			}
//		}
//	
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		if (a[i] == 1)
//		{
//			cout << i << " ";
//		}
//	}	
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int sum = 100;
//	for (int gong = 0; gong <= 20; gong++)
//	{
//		for (int mu = 0; mu <= 33; mu++)
//		{
//			for (int chu = 0; chu <= 300; chu += 3)
//			{
//				if (chu + gong + mu == 100 && gong * 5 + mu * 3 + chu / 3 == 100)
//				{
//					printf("cock=%d,hen=%d,chicken=%d\n", gong, mu, chu);
//				}
//			}
//
//		}
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "1 145 2 40585" << endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, sum = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i += 2)
//	{
//		sum += i;
//	}
//	cout << sum << endl;
//}


//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a[10000];
//	while (n != 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				if (abs(a[i]) < abs(a[j]))
//				{
//					int t = a[i];
//					a[i] = a[j];
//					a[j] = t;
//				}
//
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cout << a[i] << " ";
//		}
//		cout << endl;
//		cin >> n;
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	char a[1005];
//	gets_s(a);
//	int i;
//	for (i = 0; a[i]!='\0'; i++)
//	{
//		if (a[i] >= 'a' && a[i] <= 'z')
//		{
//			a[i] -= 32;
//		}
//		else
//		if (a[i] >= 'A' && a[i] <= 'Z')
//		{
//			a[i] += 32;
//		}
//	}
//	a[i] = '\0';
//	puts(a);
//
//}



//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	float a, b, c;
//	cin >> a >> b >> c;
//	float p =( a + b + c )/ 2;
//	float s = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("%.2f", s);
//
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int c = a + b;
//	cout << c % 10 << endl;
//
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	long int x, y, k, n;
//	
//	while (scanf_s("%ld%ld%ld", &y, &k, &n)!=EOF)
//	{
//		int m = 0;
//		for (x = 1; x <= n - y; x++)
//		{
//			if ((x + y) % k == 0)
//			{
//				cout << x << " ";
//				m++;
//			}
//		}
//		if (m == 0)
//		{
//			cout << -1 << endl;
//		}
//		else
//		{
//			cout << endl;
//		}
//
//	}
//	
//
//}


//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	//上
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j < 3 - i; j++)
//		{
//			printf(" ");
//		}
//		// *
//		for (j = 0; j < 2 * i + 1; j+=2)
//		{
//			printf("*");
//			printf(" ");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < 3; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//
//		// *
//		for (j = 0; j < 2 * (3 - i) - 1; j+=2)
//		{
//			printf("*");
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int sum = 0;
//	cin >> n;
//	int a[1005];
//	int b[105];
//	for (int i = 1; i <= 1000; i++)
//	{
//		a[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//		a[b[i]] = 1;
//	}
//	for (int i = 1; i <= 1000; i++)
//	{
//		if (a[i] == 1)
//		{
//			sum++;
//		}
//	}
//	cout << sum << endl;
//	for (int i = 1; i <= 1000; i++)
//	{
//		if (a[i] == 1)
//		{
//			cout << i << " ";
//		}
//	}
//}


//#include<iostream>
//using namespace std;
//
//int max(int *a,int n)
//{
//	int f = 1;
//	int m=a[1];
//	int i;
//	for (i = 2; i <= n; i++)
//	{
//		if (a[i] > m)
//		{
//			m = a[i];
//			f = i;
//		}
//	}
//	int hh = a[f];
//	for (int s = f + 1; s <= n; s++)
//	{
//		*(a + s - 1) = *(a + s);
//	}
//	*(a + n) = hh;
//	return f;
//}
//
//int main()
//{
//	int n;
//	int a[10005];
//	int sum = 0;
//	cin >> n;
//	int t = n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		sum +=( t - (max(a, t)));
//		t = t - 1;
//	}
//	cout << sum << endl;
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, k;
//	int a[10005];
//	cin >> n >> k;
//	int m;
//	int sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		int flag = 0;
//		cin >> m;
//		for (int j = 1; j < i; j++)
//		{
//			if (m == a[j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			a[sum] = m;
//			sum++;
//		}
//		
//	}
//	if (k > sum - 1)
//	{
//		cout << "NO RESULT" << endl;
//	}
//	else
//	{
//		for (int i = 1; i <= k; i++)
//		{
//			for (int j = i + 1; j < sum; j++)
//			{
//				if (a[j] < a[i])
//				{
//					int t = a[i];
//					a[i] = a[j];
//					a[j] = t;
//				}
//			}
//		}
//		cout << a[k];
//	}
//
//	
//		
//	
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int m = 0;
//	cin >> n;
//	int a[10005];
//	int b[10000000];
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//		for (int j = 1; j < i; j++)
//		{
//			if()
//		}
//	}
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct s{
//	long long int num;
//	int sum=0;
//}a[10005];
//int main()
//{
//	int n;
//	cin >> n;
//	long long int m;
//	int flag;
//	int i;
//	int d = 0;
//	while (n--)
//	{
//		cin >> m;
//		flag = 1;
//		for (i = 1; i <= d; i++)
//		{
//			if (m == a[i].num)
//			{
//				a[i].sum++;
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			d++;
//			a[d].num = m;
//			a[d].sum++;
//		}
//	}
//	for (int k = 1; k < d; k++)
//	{
//		for (int z = k + 1; z <= d; z++)
//		{
//			if (a[k].num > a[z].num)
//			{
//				a[0] = a[k];
//				a[k] = a[z];
//				a[z] = a[0];
//			}
//		}
//	}
//	for (int j = 1; j <= d; j++)
//	{
//		cout << a[j].num << " " << a[j].sum << endl;
//	}
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	char c1, c2;
//	while (cin >> c1 >> c2)
//	{
//		if (c1 > c2)
//			cout << c1 << " is bigger than " << c2 << endl;
//		else if (c1 < c2)
//			cout << c1 << " is smaller than " << c2 << endl;
//		else
//			cout << c1 << " equals to " << c2 << endl;
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Hello, world!";
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	long long int a, b, m;
//	long long int x, y, z;
//	while (cin >> a >> b >> m)
//	{
//		x = (a + b) % m;
//		y = (a - b) % m;
//		z = (a * b) % m;
//		cout << x << " " << y << " " << z << endl;
//
//	}
//
//}



//#include<iostream>
//using namespace std;
//int fun(int a,int b,int n,int i)
//{
//	if (n == 1&&i%2==1)
//	{
//		return a;
//	}
//	else if (n == 2&&i%2==0)
//	{
//		return b;
//
//	}
//	else
//	{
//		if (n % 2 == 0)
//		{
//			return fun(a+b, b, n - 1,i);
//		}
//		else
//		{
//			return fun(a, a+b, n - 1,i);
//
//		}	
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int a = 0;
//	int b = 1;
//	int i = n;
//	cout<< fun(a,b,n,i)<<endl;
//}


//#include<iostream>
//using namespace std;
//long int fun(int n)
//{
//	if (n != 1)
//	{
//		return fun(n - 1) * n;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	
//	cout << n << "!=" << fun(n);
//}

//#include<iostream>
//using namespace std;
//int fun(int m, int n)
//{
//	if (m != n)
//	{
//		if (m > n)
//		{
//			return fun(m - n, n);
//		}
//		if (n > m)
//		{
//			return fun(m, n - m);
//		}
//	}
//	else
//	{
//		return m;
//	}
//}
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	
//	cout<<"cgd="<< fun(m, n);
//
//}


//#include<iostream>
//using namespace std;
//void fun(int n,char A,char B,char C)
//{
//	if (n == 1)
//	{
//		cout << n << " " << A << " " << C << endl;
//	}
//	else
//	{
//		fun(n - 1, A, C, B);
//		cout << n << " " << A << " " << C << endl;
//		fun(n - 1, B, A, C);
//	}
//}
//void fun1(int n)
//{
//	char A, B, C;
//	fun(n, 'A', 'C', 'B');
//
//}
//int main()
//{
//	int n;
//	cin >> n;
//	fun1(n);
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//double fun(double x,double a,double b,double c,double d)
//{
//    return a * x * x * x + b * x * x + c * x + d;
//}
//double mm(double i,double j,double a,double b,double c,double d)
//{
//    double left, right, mid;
//    left = i;
//    right = j;
//    while (right - left > 0.001)
//    {
//        mid = (left + right) / 2.0;
//        if (fun(left, a, b, c, d) * fun(mid, a, b, c, d) < 0)
//            right = mid;
//        else
//            left = mid;
//    }
//    return left;
//}
//int main()
//{
//    double a, b, c, d;
//    cin >> a >> b >> c >> d;
//    for (double i = -100; i <= 100; i+=1) 
//    {
//        double j = i + 1;
//        if (fun(i,a,b,c,d) == 0) 
//            printf("%.2f ", i);
//        if (fun(j,a,b,c,d) * fun(i,a,b,c,d) < 0)
//        {
//            printf("%.2f ", mm(i,j,a,b,c,d));
//        }
//    }
//}
//




//#include<iostream>
//using namespace std;
//int fun(long long int b,long long int p,long long int k)        
//{
//	long long int m;
//	if (p == 0)        
//		return 1;
//	else
//	{
//		m = ((fun(b, p / 2, k) % k) * (fun(b, p / 2, k) % k)) % k;
//		if (p % 2 == 1)
//			m = (m%k * b%k) % k;
//		return m;
//	}
//}
//int main()
//{
//	long long int b, p, k;
//	cin >> b >> p >> k;
//	cout << b << "^" << p << " " << "mod " << k << "=" << fun(b, p, k) << endl;
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include<iostream>
//using namespace std;
//#define MAX 100
//typedef char DataType;
//typedef struct node
//{
//	DataType data[MAX];
//	int top;
//}SeqStack;
////置空栈
//void InitStack(SeqStack* s)
//{
//	s->top = -1;
//}
////入栈
//int Push(SeqStack* s, DataType x)
//{
//	if (s->top >= MAX - 1)
//	{
//		printf("overflow\n");
//		return 0;
//	}
//	s->top++;
//	s->data[s->top] = x;
//	return 1;
//}
////出栈
//DataType Pop(SeqStack* s)
//{
//	DataType x;
//	if (s->top < 0)
//	{
//		printf("overflow\n");
//		exit(0);
//	}
//	x = s->top--;
//	return x;
//}
//
//int main()
//{
//	SeqStack* s, l;
//	s = &l;
//	DataType x;
//	InitStack(s);
//	while ((x = getchar())&&x!= '@')
//	{
//		if (x == '(')
//		{
//			Push(s, x);
//		}
//		if (x == ')')
//		{
//			if (s->data[s->top] == '(')
//			{
//				Pop(s);
//			}
//			else
//			{
//				cout << "NO" << endl;
//				return 0;
//			}
//		}
//	}
//	if (s -> top == -1)
//	{
//		cout << "YES" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n, m;
//	int a[10002], b[10002], c[10002];
//	int sum[100000];
//	int k = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i] >> b[i] >> c[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			sum[k] = a[i] * j * j + b[i] * j + c[i];
//			k++;
//			if (k > 10000)
//			{
//				sort(sum, sum + k);
//				k = m;
//			}
//		}
//	}
//	sort(sum, sum + k);
//	for (int i = 0; i < m; i++)
//	{
//		cout << sum[i] << " ";
//	}
//}



//#include<iostream>
//#include<queue>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n>> m;
//	int a, b, c;
//	int sum[10005];
//	priority_queue<int, vector<int>, less<int> > Q;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a >> b >> c;
//		for (int j = 1; j <= m; j++)
//		{
//			int f = a * j * j + b * j + c;
//			if (i == 1) 
//			{
//				Q.push(f);
//			}
//			else
//			{
//				if (f < Q.top())
//				{
//					Q.push(f);
//					Q.pop();
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//	}
//	for (int i = m; i >= 1; i--) 
//	{
//		sum[i] = Q.top();
//		Q.pop();
//	}
//	for (int i = 1; i <= m; i++) 
//	{
//		cout << sum[i] << " ";
//	}
//}


//#include<iostream>
//using namespace std;
//const int N = 20005;
//long long H[N];
//int Size;
//int parent(int x)
//{
//	return x / 2;
//}
//int left(int x)
//{
//	return 2 * x;
//}
//int right(int x)
//{
//	return 2 * x + 1;
//}
//void minheapify(long long* H, int x)
//{
//	int y;
//	int l = left(x);
//	int r = right(x);
//	y = (l <= Size && H[l] > H[x]) ? l : x;
//	y = (r <= Size && H[r] > H[y]) ? r : y;
//	if (y != x)
//	{
//		swap(H[x], H[y]);
//		minheapify(H, y);
//	}
//}
//int minheappop(long long* H)
//{
//	long long y;
//	if (Size > 0)
//	{
//		y = H[1];
//		H[1] = H[Size];
//		Size--;
//		minheapify(H, 1);
//		return y;
//	}
//}
//void minheapinsert(long long* H, long long x)
//{
//	H[++Size] = x;
//	for (int i = Size; i > 1 && H[parent(i)] < H[i]; i = parent(i))
//	{
//		swap(H[parent(i)], H[i]);
//	}
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int a, b, c;
//	int sum[N];
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a >> b >> c;
//		for (int j = 1; j <= m; j++)
//		{
//			int f = a * j * j + b * j + c;
//			if (i == 1)
//			{
//				minheapinsert(H, f);
//			}
//			else
//			{
//				if (f < H[1])
//				{
//					H[1] = H[Size];
//					Size--;
//					minheapify(H, 1);
//					minheapinsert(H, f);
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//	}
//	for (int i = m; i >= 1; i--)
//	{
//		sum[i] = minheappop(H);
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cout << sum[i] << " ";
//	}
//}
//

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int m[352][352];
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cin >> m[i][j];
//		}
//	}
//	for (int i = n - 1; i >= 0; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			m[i][j] += max(m[i + 1][j], m[i + 1][j + 1]);
//		}
//	}
//	cout << m[1][1] << endl;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int m[1002];
//	int dp[1002];
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> m[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i]=1;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			if (m[i] > m[j])
//			{
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//	sort(dp+1, dp + n+1);
//	cout << dp[n] << endl;
//}

//#include<stdio.h>
//float average(int n)
//{
//	int i;
//	float x, s = 0;
//	printf("请输入学生成绩：");
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%f", &x);
//		s += x;
//	}
//	return s / n;
//}
//int main()
//{
//	int n;
//	printf("请输入学生人数：");
//	scanf_s("%d", &n);
//	printf("平均成绩是：%.2f\n", average(n));
//
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a[105];
//	int dp[105][105];
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int s = 2; s <= n - 1; s++)
//	{
//		for (int i = 1; i <= n - s; i++)
//		{
//			int j = i + s;
//			dp[i][j] = INT_MAX;
//			for (int k = i + 1; k < j; k++)
//			{
//				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + a[i] * a[j] * a[k]);
//			}
//		}
//	}
//	cout << dp[1][n];
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	char s[5005];
//	scanf_s("%d%s", &n, s);
//	int c[2][5005] = { 0 };
//	for (int i = n - 1; i >= 0; i--)
//	{
//		for (int j = i; j < n; j++)
//		{
//			if (s[i]==s[j])
//			{
//				c[i & 1][j] = c[(i + 1) & 1][j - 1];
//
//			}
//			else
//			{
//				c[i & 1][j] = min(c[(i + 1) & 1][j], c[i & 1][j - 1]) + 1;
//
//			}
//		}
//	}
//	cout << c[0][n - 1];
//}


//#include<iostream>
//using namespace std;
//int n, c;
//int a[10005];
//int flag = 0;
//int b[10005];
//int sum[10005] = { 0 };
//void ff(int m)//输出
//{
//	flag++;
//	for (int i = 1; i <= m; i++)
//		cout << b[i] << " ";
//}
//void DFS(int x, int c)
//{
//	for (int i = 1; i <= n&&x<10005; i++)
//	{
//		if (a[i] <= c && sum[a[i]])
//		{
//			c-= a[i];
//			sum[a[i]]--;
//			b[x] = a[i];
//			if (c == 0)
//			{
//				ff(x);
//				break;
//			}
//			else
//			{
//				DFS(x + 1, c);
//			}
//			b[x] = 0;
//			c += a[i];
//		}
//	}
//}
//int main()
//{
//	cin >> n >> c;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		sum[a[i]]++;
//	}
//	DFS(1, c);
//	if (flag == 0)
//		cout << "No solution!" << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int sum=0;
//int a[11][11];
//int b[11][11];
//void dfs(int x, int y,int n) 
//{
//	int p = x;
//	int q = y;
//	if (x == 1 && y == n) 
//	{
//		sum++;
//		return;
//	}
//	for (int i = 1; i <= 8; i++) 
//	{ 
//		if (i == 1 && x > 1)//上
//		{
//			x--;
//		}
//		else if (i == 2 && x < n)//下
//		{
//			x++;
//		}
//		else if (i == 3 && y > 1)
//		{
//			y--;
//		}
//		else if (i == 4 && y < n)
//		{
//			y++;
//		}
//		else if (i == 5 && x > 1 && y > 1)//左上
//		{
//			x--;
//			y--;
//		}
//		else if (i == 6 && x > 1 && y < n)
//		{
//			x--;
//			y++;
//		}
//		else if (i == 7 && x < n && y>1)
//		{
//			x++;
//			y--;
//		}
//		else if (i == 8 && x < n && y < n)
//		{
//			x++;
//			y++;
//		}
//		if (b[x][y] == 0 && a[x][y] == 1) 
//		{ 
//			b[x][y] = 1;
//			dfs(x, y, n);
//			b[x][y] = 0;
//		}
//		x = p;
//		y = q;
//
//	}
//}
//int main() 
//{
//	int n;
//	cin >> n;
//	b[1][1] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a[i][j];
//			a[i][j]++;
//		}
//	}
//	dfs(1, 1, n);
//	cout << sum << endl;
//}


//#include<iostream>
//using namespace std;
//int n, a[85];
//int DFS(int m,int b,int sum)
//{
//    if (sum == n)
//    {
//		for (int i = 0; i < b-1; i++)
//		{
//			cout << a[i] << "+";
//		}
//		cout << a[b - 1] << endl;
//        return 0;
//    }
//	if (sum > n)
//	{
//		return 0;
//	}
//	for (int i = m; i < n; i++)
//	{
//		a[b] = i;
//		DFS(i, b + 1, sum + i);
//	}
//}
//int main()
//{
//	cin >> n;
//	DFS(1,0, 0);
//    return 0;
//}



//class Solution {
//public:
//    int left_bound(vector<int>& nums, int target)
//    {
//        int begin = 0, end = nums.size() - 1;
//        while (begin <= end)
//        {
//            int mid = (begin + end) / 2;
//            if (target == nums[mid]) //相等时候还要找到最左侧的该值
//            {
//                if (mid == 0 || nums[mid - 1] < target) //说明是最左的索引了
//                    return mid;
//                end = mid - 1; //否则令end左移
//            }
//            else if (target < nums[mid])
//                end = mid - 1;
//            else if (target > nums[mid])
//                begin = mid + 1;
//        }
//        return -1;
//    }
//    int right_bound(vector<int>& nums, int target)
//    {
//        int begin = 0, end = nums.size() - 1;
//        while (begin <= end)
//        {
//            int mid = (begin + end) / 2;
//            if (target == nums[mid]) //相等时候还要找到最右侧的该值
//            {
//                if (mid == nums.size() - 1 || nums[mid + 1] > target) //说明是最右的索引了
//                    return mid;
//                begin = mid + 1; //否则令end左移
//            }
//            else if (target < nums[mid])
//                end = mid - 1;
//            else if (target > nums[mid])
//                begin = mid + 1;
//        }
//        return -1;
//    }
//
//    vector<int> searchRange(vector<int>& nums, int target)
//    {
//        vector<int> result;
//        int left = left_bound(nums, target);
//        int right = 0;
//        if (left == -1)
//            right = -1;
//        else
//            right = right_bound(nums, target);
//        result.push_back(left);
//        result.push_back(right);
//        return result;
//
//    }
//};



//#include<iostream>
//using namespace std;
//int searchInsert(int nums[], int target,int length)
//{
//    int index = -1;
//    int begin = 0, end = length - 1;
//    while (index == -1) //未找到位置
//    {
//        int mid = (begin + end) / 2;
//        if (target == nums[mid])
//            index = mid;
//        else if (target < nums[mid])  //mid处值大于target
//        {
//            if (mid == 0 || target > nums[mid - 1]) //短路,不用判断mid-1非法
//                index = mid;   //确定了target的位置
//            end = mid - 1; //因为已经判断过mid的位置，直接mid-1即可
//        }
//        else if (target > nums[mid])
//        {
//            if (mid == length - 1 || target < nums[mid + 1])
//                index = mid + 1;
//            begin = mid + 1;
//        }
//    }
//    return index;
//}
//int main()
//{
//    int target,length,nums[100];    //int型数组用于存储输入变量
//    cin >> target >> length;
//    int i = 0;
//    int m = length;
//    while ((m--)!=0)
//    {
//        cin >> nums[i];
//        i++;
//    }
//    cout<<searchInsert(nums, target,length);
//}

//#include<iostream>
//using namespace std;
//int mySqrt(int x)
//{
//    int left = 0, right = x, ans = -1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if ((long long)mid * mid <= x)  //避免溢出
//        {
//            ans = mid;
//            left = mid + 1;
//        }
//        else
//        {
//            right = mid - 1;
//        }
//    }
//    return ans;
//}
//int main()
//{
//    int x;
//    cin >> x;
//    cout << mySqrt(x);
//
//}




//#include<iostream>
//using namespace std;
//
//int getNumber4(int time[], int number, int n)
//{
//	int usedTime = 0;  //最长时间为总时间
//	int fin[105];
//	for (int k = 0; k < number; k++) //初始时间清零
//	{
//		fin[k] = 0;
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++) //冒泡选出任务时间最大的
//		{
//			if (time[j] > time[j + 1])
//			{
//				int temp = time[j + 1];
//				time[j + 1] = time[j];
//				time[j] = temp;
//			}
//		}
//		int min = 0;;
//		int value = 100;
//		for (int k = 0; k < number; k++)  //选出当前累计工时最小的机子
//		{
//			if (fin[k] < value)
//			{
//				min = k;
//				value = fin[k];
//			}
//		}
//		fin[min] += time[n - 1 - i];
//	}
//	int min = 0;;
//	int value = 100;
//	for (int k = 0; k < number; k++)  //选出当前累计工时最小的机子
//	{
//		if (fin[k] < value)
//		{
//			min = k;
//			value = fin[k];
//		}
//	}
//	fin[min] += time[0];
//	for (int n = 0; n < number; n++)
//	{
//		if (fin[n] > usedTime)
//		{
//			usedTime = fin[n];
//		}
//	}
//	return usedTime;
//}
//
//	
//		
//int main()
//{
//	int n;
//	int time[105];
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> time[i];
//	}
//	int number;
//	cin >> number;
//
//	int Sumtime = getNumber4(time, number, n);
//
//	cout << Sumtime;
//}
	

//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int getNumber5(int v[],int n)
//{
//	int time = 0;;
//	sort(v, v+n);
//	int N = n; //N表示当前人数
//	while (N > 3)
//	{
//		if (2 * v[0] + v[N - 1] + v[N - 2] > 2 * v[1] + v[0] + v[N - 1])
//			time += 2 * v[1] + v[0] + v[N - 1];
//		else
//			time += 2 * v[0] + v[N - 1] + v[N - 2];
//		N -= 2;
//	}
//	if (N == 3) //处理边界
//		{
//		time += v[2] + v[0] + v[1];
//		}
//	else if (N == 2)
//		{
//		time += v[1];
//		}
//	else if (N == 1)
//		{
//		time += v[0];
//		}
//		return time;
//		
//}
//int main()
//{
//	int v[105]; //按照不同的人的速度过河所需的时间
//	int n ;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i];
//	}
//	int timeSum = getNumber5(v, n);
//	cout << timeSum;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    int n, p;
//    int a[200010];
//    while (t--) {
//        cin >> n >> p;
//        for (int i = 0; i < n; i++) {
//            cin >> a[i];
//            a[i] %= p;
//        }
//
//        sort(a, a + n);
//
//        int l = 0;
//        int r = n - 1;
//        int ans = (a[r] + a[r - 1]) % p;
//        while (l < r) 
//        {
//            while (a[l] + a[r] >= p)
//                r--;
//            ans = max(ans, (a[l] + a[r]));
//            l++;
//        }
//        cout << ans << endl;
//    }
//    return 0;
//
//}



//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//    int num = 0;
//    while (t--)
//    {
//        num++;
//        int n;
//        cin >> n;
//        string s;
//        cin >> s;
//        int p = 0;
//        unsigned long long ans = 0;
//        unsigned long long use = 0;
//        if (n <= 0)
//        {
//            cout << "Case #" << num << ": " << ans << endl;
//            continue;
//        }
//        for (; p < n; p++)
//        {
//            use <<= 1;
//            if (s[p] == '1')
//                use += 1;
//        }//把长度为n字符串变成二进制数
//
//        ans = max(ans, use);
//        {
//            for (; p < s.size(); ++p)
//            {
//                if (s[p - n] == '1')
//                    use -= (1ull << (n - 1));
//
//                use <<= 1;
//                if (s[p] == '1')
//                    use += 1;
//                ans = max(use, ans);
//            }
//        }
//        cout << "Case #" << num << ": " << ans << endl;
//    }
//    return 0;
//}
//


//#include<iostream>
//using namespace std;
//int main()
//{
//	long int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	long int x, y;
//	long long int p;
//	if (a > c)
//		x = c;
//	else
//		x = a;
//	if (b > d)
//		y = d;
//	else
//		y = b;
//	p = x * y;
//	cout << p << endl;
//	
//}
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	int m = 0, z = 0;
//	string s;
//	cin >> n;
//	cin >> s;
//	for (int i = 0; i < n; i++)
//	{
//		if (s[i] == '0')
//			m++;
//		if (s[i] == '1')
//			z++;
//	}
//	if (z == n)
//		cout << '0' << endl;
//	else 
//		if (s[0] == '1' || s[n - 1] == '1'||m==1)
//		cout << '1' << endl;
//	else
//		cout << '2' << endl;
//
//}

//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    string s;
//    cin >> s;
//    int m;
//    int sum[100005];
//    int b = s.length();
//    for (int i = 0; i < b; i++)
//    {
//        m = 1;
//        sum[i] = 1;
//        for (int j = i + 1; j < b; j++)
//        {
//            if (int(s[j]) == int(s[i]) + j - i)
//            {
//                m++;
//                sum[i] = m;
//                
//            }
//            else
//            {
//                break;
//            }
//        }
//    }
//    int maxop = *max_element(sum, sum + b);
//    cout << maxop;
//}
//



//#include<stdio.h>
//int main()
//{
//	int year, month, day;
//	scanf_s("%d%d%d", &year, &month, &day);
//	int sum = 0;
//	switch (month - 1)
//	{
//	case 11:sum += 30;
//	case 10:sum += 31;
//	case 9:sum += 30;
//	case 8:sum += 31;
//	case 7:sum += 31;
//	case 6:sum += 30;
//	case 5:sum += 31;
//	case 4:sum += 30;
//	case 3:sum += 31;
//	case 2:sum += 28;
//	case 1:sum += 31;
//	}
//	sum += day;
//	if (month > 2)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			sum++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<stdlib.h>
//int def()
//{
//   
//    char s[100];
//    int m = 0;
//    s[m] = getchar();
//    while (s[m] != '\n')
//    {
//        m++;
//        s[m] = getchar();
//    }
//    s[m] = '\0';
//    int n = strlen(s);
//    int maxPos = 0;
//    int maxLen = 0;
//    int j,i;
//    for (i = 0; i < n; ++i)
//    {
//        int lower[26] = { 0 };
//        int upper[26] = { 0 };
//        int flag;
//        for (j = i; j < n; ++j) 
//        {
//            if (islower(s[j])) 
//            {
//                lower[int((s[j] - 'a'))]=1;
//            }
//            else 
//            {
//                upper[int((s[j] - 'A'))]=1;
//            }
//            for (m = 0; m <26; m++)
//            {
//                if (lower[m] == upper[m])
//                {
//                    flag = 1;
//                }
//                else 
//                {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (flag == 1 && j - i + 1 > maxLen)
//            {
//                maxPos = i;
//                maxLen = j - i + 1;
//            }
//        }
//    }
//   
//    for (int k = maxPos; k < maxPos+maxLen; k++)
//    {
//        printf("%c", s[k]);
//    }
//    
//   
//}
//void main()
//{
//    def();
//}


//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<stdlib.h>
//void def()
//{
//    char s[100];
//    int m = 0;
//    s[m] = getchar();
//    while (s[m] != '\n')
//    {
//        m++;
//        s[m] = getchar();
//    }
//    s[m] = '\0';
//    int n = strlen(s);
//    int maxPos = 0;
//    int maxLen = 0;
//    int j, i;
//    for (i = 0; i < n; ++i)
//    {
//        int lower = 0;
//        int upper = 0;
//        for (j = i; j < n; ++j)
//        {
//            if (islower(s[j]))
//            {
//                lower |= 1 << (s[j] - 'a');
//            }
//            else
//            {
//                upper |= 1 << (s[j] - 'A');
//            }
//            if (lower == upper && j - i + 1 > maxLen)
//            {
//                maxPos = i;
//                maxLen = j - i + 1;
//            }
//        }
//    }
//    char ans[100];
//    int r = 0;
//    for (int k = maxPos; k < maxPos + maxLen; k++)
//    {
//        ans[r] = s[k];
//        r++;
//    }
//    ans[r] = '\0';
//    printf("%s", ans);
//
//}
//void main()
//{
//    def();
//}





//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<stdlib.h>
//void dfs(const char* s, int start, int end, int *maxPos, int *maxLen) {
//    if (start >= end) {
//        return;
//    }
//    int lower[26] = { 0 }, upper[26] = { 0 };
//    for (int i = start; i <= end; ++i) {
//        if (islower(s[i])) 
//        {
//            lower[int((s[i] - 'a'))] = 1;
//        }
//        else 
//        {
//            upper[int((s[i] - 'A'))] = 1;
//        }
//    }
//    int flag;
//    for (int m = 0; m < 26; m++)
//    {
//        if (lower[m] == upper[m])
//        {
//            flag = 1;
//        }
//        else 
//        {
//            flag = 0;
//            break;
//        }
//    }
//    if (flag) {
//        if (end - start + 1 > *maxLen) {
//            *maxPos = start;
//            *maxLen = end - start + 1;
//        }
//        return;
//    }
//    for (int p = 0; p < 26; p++)
//    {
//        if (lower[p]&& upper[p])
//            ;
//        else
//        {
//            lower[p] = 0;
//            upper[p] = 0;
//        }
//    }
//    int pos = start;
//    while(pos <= end) 
//    {
//        start = pos;
//        while (pos <= end&& lower[tolower(s[pos]) - 'a'])
//        {
//            ++pos;
//        }
//        dfs(s, start, pos - 1, maxPos, maxLen);
//        ++pos;
//    }
//}
//char* longestNiceSubstring(char* s) {
//    int maxPos = 0, maxLen = 0;
//    dfs(s, 0, strlen(s) - 1, &maxPos, &maxLen);
//    s[maxPos + maxLen] = '\0';
//    return s + maxPos;
//   
//}
//int main()
//{
//    char s[100];
//    int m = 0;
//    s[m] = getchar();
//    while (s[m] != '\n')
//    {
//        m++;
//        s[m] = getchar();
//    }
//    s[m] = '\0';
//    printf("%s",longestNiceSubstring(s));
//}


//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<stdlib.h>
//void dfs(const char* s, int start, int end, int* maxPos, int* maxLen) {
//    if (start >= end) {
//        return;
//    }
//    int lower = 0, upper = 0;
//    for (int i = start; i <= end; ++i) {
//        if (islower(s[i])) {
//            lower |= 1 << (s[i] - 'a');
//        }
//        else {
//            upper |= 1 << (s[i] - 'A');
//        }
//    }
//    if (lower == upper) {
//        if (end - start + 1 > *maxLen) {
//            *maxPos = start;
//            *maxLen = end - start + 1;
//        }
//        return;
//    }
//    int valid = lower & upper;
//    int pos = start;
//    while (pos <= end) {
//        start = pos;
//        while (pos <= end && valid & (1 << (tolower(s[pos]) - 'a'))) {
//            ++pos;
//        }
//        dfs(s, start, pos - 1, maxPos, maxLen);
//        ++pos;
//    }
//}
//
//char* longestNiceSubstring(char* s) {
//    int maxPos = 0, maxLen = 0;
//    dfs(s, 0, strlen(s) - 1, &maxPos, &maxLen);
//    s[maxPos + maxLen] = '\0';
//    return s + maxPos;
//
//}
//int main()
//{
//    char s[100];
//    int m = 0;
//    s[m] = getchar();
//    while (s[m] != '\n')
//    {
//        m++;
//        s[m] = getchar();
//    }
//    s[m] = '\0';
//    printf("%s", longestNiceSubstring(s));
//}


//
//#include<stdio.h>
//int main()
//{
//	int a[100], res[100];
//	int n;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	if (n == 0)
//		printf("0");
//	if (n == 1)
//		printf("%d", a[0]);
//	for (int i = 0; i < n; i++)
//	{
//		res[i] = 1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (j != i)
//				res[i] *= a[j];	
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", res[i]);
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int a[100], res[100];
//	int n,temp;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	if (n == 0)
//		printf("0");
//	if (n == 1)
//		printf("%d", a[0]);
//	for (int i = 0; i < n; i++)
//	{
//		res[i] = 1;
//	}
//	for (int i = 1; i < n ; i++)
//	{
//		res[i] = res[i-1] * a[i-1];
//	}
//	temp = a[n - 1];
//	for (int i = n - 2; i > -1; i--)
//	{
//		res[i] = res[i] * temp;
//		temp = temp * a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", res[i]);
//	}
//}

//#include<stdio.h>
//long long mypow(long long a, long long b, long long p) {
//	long long ret = 1 % p;
//	while (b) 
//	{
//		if (b & 1) 
//			ret = ret * a % p;
//		b >>= 1; 
//		a = a * a % p;
//	}
//	return ret;
//}
//int main() {
//	long long a, b, p; 
//	scanf_s("%lld%lld%lld", &a, &b, &p);
//	printf("%lld", mypow(a, b, p));
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//char pairs(char a) 
//{
//    if (a == '}') return '{';
//    if (a == ']') return '[';
//    if (a == ')') return '(';
//    return 0;
//}
//
//bool isValid(char *s)
//{
//    int n = strlen(s);
//    if (n % 2 == 1) 
//    {
//        return false;
//    }
//    int stk[100], top = 0;
//    for (int i = 0; i < n; i++) 
//    {
//        char ch = pairs(s[i]);
//        if (ch) 
//        {
//            if (top == 0 || stk[top - 1] != ch) 
//            {
//                return false;
//            }
//            top--;
//        }
//        else 
//        {
//            stk[top++] = s[i];
//        }
//    }
//    return top == 0;
//}
//int main()
//{
//    char s[100];
//    int m = 0;
//    s[m] = getchar();
//    while (s[m] != '\n')
//    {
//        m++;
//        s[m] = getchar();
//    }
//    s[m] = '\0';
//    if (isValid(s) == 1)
//        printf("True");
//    else
//        printf("False");
//}



//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include<stdlib.h>
//void def()
//{
//    char s[100];
//    scanf_s("%s", s);
//    int n = strlen(s);
//    int maxpos = 0;
//    int maxlen = 0;
//    int j, i;
//    for (i = 0; i < n; ++i)
//    {
//        int lower[26] = { 0 };
//        int upper[26] = { 0 };
//        int flag;
//        for (j = i; j < n; ++j)
//        {
//            if (islower(s[j]))         //islower()在ctype.h库中，判断是否为小写英文字母
//            {
//                lower[int((s[j] - 'a'))] = 1;
//            }
//            else
//            {
//                upper[int((s[j] - 'a'))] = 1;
//            }
//            for (int m = 0; m < 26; m++)
//            {
//                if (lower[m] == upper[m])
//                {
//                    flag = 1;
//                }
//                else
//                {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (flag == 1 && j - i + 1 > maxlen)
//            {
//                maxpos = i;
//                maxlen = j - i + 1;
//            }
//        }
//    }
//
//    for (int k = maxpos; k < maxpos + maxlen; k++)
//    {
//        printf("%c", s[k]);
//    }
//}
//void main()
//{
//    def();
//}






//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int a[26] = { 0 };
//	char c;
//	int max=0;
//	string s;
//	cin >> s;
//	for (int i = 0; i <= s.length(); i++)
//	{
//		a[s[i] - 97]++;
//
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//			c = i + 'a';
//		}
//	}
//	cout << c << endl;
//	cout << max << endl;
//	
//}


//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int n,num;
//	int jige = 0, youxiu = 0;
//	cin >> n;
//	int m = n;
//	while (n!=0)
//	{
//		cin >> num;
//		if (num >= 60)
//		{
//			jige++;
//			if (num >= 85)
//			{
//				youxiu++;
//			}
//		}
//		n--;
//	}
//	cout << floor(jige*100 / m)<<"%" << endl;
//	cout << floor(youxiu*100 / m)  <<"%" << endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[9];
//	for (int j = 0; j < 9; j++)
//		a[j]=2021;
//	for (int i = 1;; i++)
//	{
//		int k = i;
//		while (k != 0)
//		{
//			a[k % 10]--;
//			if (a[k%10] == 0)
//			{
//				cout << i << endl;
//				break;
//			}
//			k = k / 10;
//		}
//	}
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a;
//	int max = 0;
//	int min = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a;
//		sum += a;
//		if (a > max)
//		{
//			max = a;
//		}
//		if (a < min)
//		{
//			min = a;
//		}
//	}
//	cout << max << endl;
//	cout << min << endl;
//	cout << round(sum / n*100)/100 << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int flag = 6;
//	int sum = 0;
//	int mm[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	for (int y = 2000; y <= 2020; y++) 
//	{
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			mm[1] = 29;
//		}
//		else {
//			mm[1] = 28;
//		}
//		for (int m = 1; m <= 12; m++)
//		{
//			for (int d = 1; d <= mm[m - 1]; d++)
//			{
//				sum++;
//				if (flag > 7) 
//				{
//					flag = 1;
//				}
//				if (flag == 1||d==1)
//				{
//					sum++;
//				}
//				
//				flag++;
//				if (y == 2020 && m == 10 && d == 1)
//				{
//					cout << sum;
//				}
//				
//			}
//		}
//	}
//	
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c = 0, d = 0;
//	for (int i = 1; i <= 2020; i++)
//	{
//		for (int j = 1; j <= 2020; j++)
//		{
//			b = i;
//			c = j;
//			for (;;)
//			{
//				a = b % c;
//				b = c;
//				c = a;
//				if (b == 1) { d++; break; }
//				if (c == 0) { break; }
//			}
//		}
//	}
//	cout << d;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10] = { 111,25,56,34,7,16,89,74,23,24 };
//	int n = 10;
//	int temp;
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n-i-1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j+1];
//				a[j + 1] = a[j];
//				a[j] = temp;
//
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//


//#include<iostream>
//using namespace std;
//int main()
//{
//	long long int a, b;
//	long long int sum = 1;
//	cin >> a >> b;
//	if (a == 1)
//	{
//		cout << 1 << endl;
//		return 0;
//	}
//	for (int i = 0; i < b; i++)
//	{
//		sum *= a;
//		if (sum > 1e9) 
//		{
//			cout << "-1";
//			return 0;
//		}
//	}
//	cout << sum << endl;
//	return 0;
//	
//}

//#include<iostream>
//#include<stack>
//using namespace std;
//int main()
//{
//	stack<int> aa;
//	int q;
//	cin >> q;
//	int m[100005];
//	int m2[100005];
//	int j = 0;
//	while (q--)
//	{
//		int n;
//		cin >> n;
//		
//		for (int i = 0; i < n; i++)
//		{
//			cin >> m[i];
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cin >> m2[i];
//		}
//		aa.push(m[0]);
//		for (int i = 1; i < n; i++)
//		{
//			while (m2[j] == aa.top())
//			{
//				j++;
//				aa.pop();
//			}
//			aa.push(m[i]);
//			
//		}
//		if (j == n - 2)
//		{
//			cout << "YES!" << endl;
//		}
//		else
//		{
//			cout << "NO！" << endl;
//		}
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "    *    " << endl;
//	cout << "   ***   " << endl;
//	cout << "  *****  " << endl;
//	cout << " ******* " << endl;
//	cout << "*********" << endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "你好！" << endl;
//	cout << "C++。" << endl;
//
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << 2+3 << endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "你好！" << endl;
//	cout << "C++." << endl;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int n, k;
//    cin >> n >> k;
//    char a[100005];
//    int flag = 0;
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        if (a[i] == 'M' || a[i] == 'T')
//        {
//            sum++;
//        }
//        else
//        {
//            flag = 1;
//        }
//    }
//    if (flag == 0)
//    {
//        cout << sum << endl;
//    }
//    else
//    {
//        if (sum + k <= n)
//        {
//            cout << sum + k << endl;
//        }
//        else {
//            cout << n << endl;
//        }
//
//    }
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n, q;
//	long long int q1[100005], q2[100005];
//	long long int sum1[100005], sum2[100005];
//	cin >> n >> q;
//	long long int a[100005];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < q; i++)
//	{
//		cin >> q1[i] >> q2[i];
//	}
//
//	int k = 0;
//	while (k < q)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			sum1[k] += a[i];
//			sum2[k] += a[i];
//			if (a[i] == 0)
//			{
//				sum1[k] += q1[k];
//				sum2[k] += q2[k];
//			}
//		}
//		k++;
//	}
//	for (int i = 0; i < q; i++)
//	{
//		cout << sum1[i] << sum2[i] <<  endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	long long int n;
//	int m, q;
//	int re[10005][10005];
//	int u, v,op;
//	cin >> n >> m >> q;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v;
//		re[u][v] = 1;
//		re[v][u] = 1;
//	}
//	for (int i = 0; i < q; i++)
//	{
//		cin >> op >> u >> v;
//		if (op == 1)
//		{
//			re[u][v] = 0;
//			re[v][u] = 0;
//		}
//		if (op == 2)
//		{
//			if (re[u][v] == 1)
//			{
//				cout << "YES" << endl;
//			}
//			else
//			{
//				for (int i = 0; i < n; i++)
//				{
//					if (re[u][i] == 1)
//					{
//						for (int j = 0; j < n; j++)
//						{
//							if (re[i][j] == 1)
//								re[u][j] == 1;
//						}
//					}
//				}
//
//			}
//			if (re[u][v] == 1)
//			{
//				cout << "YES" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//	}
//	
//}


