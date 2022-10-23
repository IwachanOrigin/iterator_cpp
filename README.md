# Iterator pattern cpp demo

## Overview

    Iterator pattern の使い方

## 使いどころ

    おそらく、自前で実装して利用できるようにすることは無いと思います。  
    よっぽど速度を求めていない限りは、vectorなどが標準でイテレータパターンを実装しているので  
    そちらを使うのが良いと個人的には思っています。  
    この実装では、PartsクラスをMachineクラスが集約して格納しています。  
    MachineクラスはAggregateクラス(インターフェイス)を継承、実装します。  
    Machineクラスはiterator関数を実装し、このときにIteratorMachineクラスを作り出します。  
    このIteratorMachineクラスが実際にMachineクラスに格納されているPartsクラスへアクセスし、  
    順次取り出すような動作を担います。  
    IteratorMachineクラスはIteratorクラス(インターフェイス)を継承、実装しています。  
    言葉でつらつらと書き連ねてみましたが、いまいち伝わりづらいですね。  
    実装を読むのが一番手っ取り早く理解に繋がるのではないかなと思います。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。(Debug Buildです)  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build 

    ex. LLVM(15.0.0+) + Ninja + cmakeの場合  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/iterator_cpp/blob/master/LICENSE)


