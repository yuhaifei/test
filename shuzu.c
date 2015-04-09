1 int func(const int src[], int len) 
2 { 
3 	int max_sum = 0; 
4 	int val = 0; 
5 	int i = 0; 
6     int flag = 0; 
7 
 
8 	do 
9 	{ 
10 		if (i < len && src[i] > 0) 
11 		{ 
12 			if (val < src[i]) 
13 			{ 
14 				val = src[i]; 
15 			} 
16 			flag = 1; 
17 		} 
18 		else 
19 		{ 
20 			if (flag) 
21 			{ 
22 				max_sum += val; 
23 			} 
24 			flag = 0; 
25 		} 
26 	} while (i++ < len); 
27 	 
28 	return max_sum; 
29 } 
30 int func(const int src[], int len){ 
31 	int max_sum = 0; 
32 	int val = 0; 
33 	int i = 0; 
34     int flag = 0; 
35 	do{ 
36 		if (i < len && src[i] > 0){ 
37 			if (val < src[i]){ 
38 				val = src[i]; 
39 			} 
40 			flag = 1; 
41 		} 
42 		else{ 
43 			if (flag) 
44 			{ 
45 				max_sum += val; 
46 			} 
47 			flag = 0; 
48 		} 
49 	} while (i++ < len); 
50 	 
51 	return max_sum; 
52 } 
