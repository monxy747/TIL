# long long型
## 概要
C99互換として、long long整数型が追加された。     

この整数型は、64ビット以上の値を表現できる。     
## 仕様
・long long型およびunsigned long long型は、64ビット以上の値を表現できることが保証される。　　　　　　

・これは、long long型の最大値を表現するマクロLLONG_MAX、およびunsigned long long型の最大値を表現するマクロULLONG_MAXによって定義されている。　　　　

・符号付き整数型であるlong longを表す整数リテラルには、llもしくはLLサフィックスを使用する。符号なし整数型であるunsigned long long型を表す整数リテラルには、ullもしくはULLサフィックスを使用する。　　　

・符号指定を除くllとLLの部分では、大文字と小文字の混在は許可しない。(lLやLlは許可されないが、'uLL'や'Ull'は問題ない。)　　　　

  ・long longは、以下のようにも表記できる：　　　　
  ・signed long long　　　　　　
  ・signed long long int　　　　
  ・long long int　　　　　　
  
・unsigned long longは、unsigned long long intのようにも表記できる。　　　　　

## 参考文献
https://cpprefjp.github.io/lang/cpp11/long_long_type.html


