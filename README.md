# multiplat_sample
multiplatform project sample for workshop

## コンパイラのインストール
下記はいずれもubuntu上でコンパイルすることを想定している。
ホストに下記のコマンドでコンパイラをインストールすること。

  - x64(セルフコンパイラ)
  下記でコンパイラやカバレッジツールをインストールする

        sudo apt-get install g++
        sudo apt-get install gcov lcov

  - aarch64(クロスコンパイラ)
  下記でコンパイラをインストールする

        sudo apt-get install g++-aarch64-linux-gnu

## テストツールのインストール
T.B.D.

## ビルド手順
ビルドにはCMAKEが必要です。

    sudo apt-get install cmake

下記の手順でビルドする。

  - x64
    
        > pwd
        {このREADMEのあるディレクトリ}
        > mkdir build
        > cd build
        > cmake -DTARGET_CPU=x64 ..

  - arm64

        > pwd
        {このREADMEのあるディレクトリ}
        > mkdir build
        > cd build
        > cmake -DTARGET_CPU=arm64 ..


