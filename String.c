1 void reserverSentence(const char* sentence, int len, char sep) 
2 { 
3     int *index_mark = new int[len](); 
4     int word_num = 1; 
5     index_mark[0] = -1; 
6     for(int i = 0; i < len; i++) { 
7         if(sentence[i] == ' ') { 
8             index_mark[word_num] = i; 
9             word_num++; 
10         } 
11     } 
12 
 
13     char * word; 
14     int word_start, word_len; 
15     index_mark[word_num] = len; 
16     word_num++; 
17     for(int i = word_num - 1; i > 0; i--) { 
18         word_start = index_mark[i - 1] + 1; 
19         word_len = index_mark[i] - word_start; 
20         word = new char[word_len + 1](); 
21         memcpy(word, sentence + word_start, word_len); 
22         cout<<word; 
23         if(i != 1) { 
24             cout<<" "; 
25         } 
26         delete[] word; 
27     } 
28     cout<<sep<<endl; 
29     delete[] index_mark; 
30 } 
31 void reserverSentences(const char* sentences, int len){ 
32     int old_pos = -1; 
33     for(int i = 0; i < len; i++) { 
34         if(sentences[i] == '.' || sentences[i] == '?' || sentences[i] == '!') { 
35             reserverSentence(sentences + old_pos + 1, i - old_pos - 1, sentences[i]); 
36             old_pos = i; 
37         }         
38     } 
39 } 
40 
 
41 int _tmain(int argc, _TCHAR* argv[]) 
42 {     
43     cout<<"Enter a sentence"<<endl; 
44     string line; 
45     getline(cin, line); 
46     reserverSentences(line.c_str(), line.size()); 
47     system("pause"); 
48     return 0;  
49 } 
