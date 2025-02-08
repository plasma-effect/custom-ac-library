# Custom AC(AtCoder) Library

AC(AtCoder) Libraryの自分用の改造です。必要最低限以外のファイルは削除しています。

## 目的

- `namespace atcoder`直下の範囲において本家と互換性を保つ
- 分割コンパイルに対応させる
- C++20用の実装を行う

## サポート

- g++ 13.3.0

MSVCのサポート予定はありません。

## その他

テストでcmakeからbazelを使用するように変更しています。
