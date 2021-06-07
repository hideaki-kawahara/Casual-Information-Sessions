= 非IT企業で社内SE（内製要員）を採用するのに2年弱かかった話

@ふーれむ

現在社内SEチームのリーダー的なロールをしております、ふーれむと申します。


弊社ではべつに「カジュアル面談」に当たるような事は別段やってないのですが、
採用のジャッジを2年ほどやっていた事、またそこで得た経験から
職務経歴書壁打ち相談を受けるようになったので、そういった所で得た知見などをお話できればなと思います。

== 採用活動に入るまでのプロセス

いきなり本題にはいるとよくわからないような気がしますし、せっかくの機会ですので、
あまり言及される事が少ない採用活動のプロセスについても以下、簡単に経緯を含めて記載しておきますね。

=== そもそもの経緯

私自身も現在の会社にJoinしたのが5年ほど前なのですが、もともと入社当初は
「君が主導して新しいシステムを作ってくれ！」と言われて入社したまではいいものの、
当時の社内システムは内製で20年モノ。結果、技術的負債超超超超超超大盛負債ペタマックス状態になっていたので
負債を返していたら3年ぐらい経ってしまった2年前、そろそろ人を入れてスピード上げるか！という話になりまして、
上長（というか創業者社長）決裁を受け、新規スタッフの採用アプローチがスタートしました。

http://www.peyoung.co.jp/products/1734/

=== とりあえず採用の枠組みを組んだ

決裁が降りたので採用について着手したのですが、弊社は人事・総務を一人のスタッフで兼務しており、
別のスタッフの採用活動も逐次やっている状況であり、更に業務負荷をお願いしにくかった事と、
社内でITについて応募者のスキルセットを客観的に判断できるのが私しかいなかったため、
人事的な窓口（人材紹介会社との対会社間）は人事の方にお願いし、他の部分は私の方で対応する体制としました。

=== 求人要項を組んだ

次に募集要件を決めます。

　

大きなところは次の様な感じになりました。

 * 採用時年収の幅

これはどうしても会社の給与テーブルに依るところが大きいですね。あまり高くも出せないのが
長期化した原因かなという気はしますが、社内的に未実現のものを予め過大評価して説明する事もできなかったので、
長期戦で挑む方向にしました。

 * 仕事の内容

何のロールで活躍してもらいたいのか、指導体制がどうなるのか　に気をつけて記載した覚えがあります。

　

まず、やってほしい事が複数ある場合には一般論として比重の大きいものを前に書きます。今回出した感じだと
「新システムの実装・維持管理/現行システムの技術検証/ヘルプデスク兼務」としました。

メンターについても明確に決まっているなら情報を出したほうが良いように思います。
上記同様、今回出した感じだと「経験豊富な上長（社内SE）の下について、都度相談しながら進めて頂き、
主に開発をご担当いただく予定です」という形にしました。

　

当然この上長というのは私です（笑）

　

入社後のイメージが付きやすいよう、年齢についても一応記載しました。

 * 必要な能力・経験

実はこの部分が一番難儀しました。

はじめに人材紹介会社のエージェントに対し、出していたかなり厳格な要件だと次のようになります。

//emlist{

〇スキルなどで必要な要件
（１）開発経験
自社サービスの開発・ソフトウェアの受諾開発で以下の工程を経験している事が望ましい
・概要設計（経験があると望ましい）
・基本設計（経験があると望ましい）
・詳細設計～単体テスト（経験必須）
・結合テスト（経験必須）
・システムテスト（経験があると望ましい）

開発分野に関しては特に問わないつもり。
（そんな複雑な業務をしているわけではないので、何らかのプロジェクトを
　複数経験していれば、恐らくわかる内容だとは思う。
　組込みで制御だけやってました　とか極端な場合は相談下さい。）

使用言語に関しては特に定めないが、（どういう言語の文化圏でやってきたのか知りたいので）
少なくともＯＯＰの流れを汲む言語か、ＬＬ系の言語の開発経験があること。
※汎用機だけの経験の人は不要です。今どきそんなにいないと思いますが。
　具体的に言語を指定したほうがいいなら
　Ruby(ないしRails)、VB、C#、Javascript、Python、Scala、Java、PHP

（２）求める動き方
ソフトウェアエンジニアリングの基本的な部分に関しては、
入社時点である程度の知識があり、ある程度の準備期間の後は実装を主導できる事が望ましい。
（設計に関してはメンター(xx歳)がいるので、都度聞いてもらって構わない。）
レベル感としては業務時間の中で、調べもって課題を解決していければ良い。
また、技術に関しては自発的にキャッチアップできるのが望ましい。

（３）想定している経験年数
経験年数としては第二新卒～30歳ぐらいまでになると思う。
（実際に上記工程をある程度経験してる人…となると
　2～3年目からになるとは思うが）
30歳ぐらいでも構わないが、恐らく年収の提示的には見合わないと思う。

（４）所持スキル
前項（２）とも関連するが、求めるスキルを具体的に書くと、
・情報系の工学部卒　かつ　基本情報技術者試験（ないしその上位資格）取得　が理想。
※そんな人材がほいほいいないのは了承している。

次点で、
・情報系の工学部以外の学部卒　かつ　基本情報技術者試験（ないしその上位資格）取得
・情報系の工学部卒、資格に関しては未取得
も可。

※単に、基礎からわざわざ教えてられないので、ある程度は知っている人でないと
　入ってもらっても逆に困る　というだけの話です。
//}

最初はこういったベースラインを明示的な形で出したのですが、やはり条件が厳しすぎたようで
あんまり応募としてはふるいませんでした。

　


最終的に少しずつハードルを緩めた結果、


//emlist{

【必須】システム開発の経験がある方（目安として1年程度）
【尚可】情報系の学部卒の方、もしくは情報処理技術者試験取得者
//}






このような形で落ち着きました。

　

なんとなくここまで見ていただいた方は気づいて頂けたでしょうか。
あんまり転職市場で見ないタイプの求人なのですよね。

そもそも社内SEでかつ内製型の募集というのが顕著に少ないですね。(ITスタートアップで内製というのならばわかるのですが、システム内製でかつ稼いでくる本体は他にいるという事が結構珍しい様に思います。)

===[column] 余談

まずなぜこんなハードな条件でスタートしたの？という話についてなのですが、
私自身が大学在学中に情報一種取得、現在は高度情報（ES,SC,DB）を持っているような人のため、
普通に大学でITをがっつり学んでいれば、応用ぐらい取れるでしょ…という感覚は採用当初には持っていました。

　

結果、そんな事はなかったなぁ　というのが現実的なところでした。

　

自分が超えたハードルは軽く見えがち　という問題はよくプロジェクトマネジメントなどでも問題になりますが、
たしかに冷静に振り返ってみるとそうだよなー　という学びは改めてありました。

　

あと、私の前職の会社が東証一部上場のSIerだったのですが、在籍時に大まかな取得率を調べられたので調べてみた事があって、
結果、社員比率として基本情報を合格しているのが3割ぐらい、応用情報の合格者については1割ちょい　といったところでした。
よくよく考えると上場企業の中堅SIerでもそんなものなので、やはりそういう観点からも
基礎打ちの部分が客観的に証明しにくいITエンジニアって結構いるんだろうな…という気がしています。

　

なお、弊社の採用の場合は、結局これでシステム開発の経験が問題ないレベルで、かつ
情報系の院卒で基本情報も合格している人が入ってきてくれ（て、実際に想定以上にパワーが出て）るので、
結果としては想定通りの採用に着地できたのでした。

===[/column]

== 採用活動をはじめた

採用活動をはじめました。

まず、募集期間でいうと16か月かかり、50名弱の方に応募いただきました。

　

おっと、弊社の採用プロセスの説明をしていませんでしたね。
簡単に概要だけ記載しておきましょう。

=== 採用プロセス

とはいっても、そんなプロセスというほど大仰なものではないです。

 * 1次試験：筆記試験・面接
 * 最終試験：社長面接

なお、余談ですが私が入社試験を受けたときは連日で2つの試験をやって、最終試験（面談中）に「あなたに是非お願いしたい」と言われてしまったので2日で内定が出ました…

　

弊社はスピード感がちょっとありすぎじゃないかという気はします。

=== 実際に採用活動をしてみた経緯と結果

実は採用活動をしている中で、内定を3名の方にお出ししています。

　

つまり16か月の間に　採用活動→一人目内定→一人目辞退→採用活動→二人目内定→二人目辞退→採用活動→三人目内定→三人目入社

という事が起こっております。そりゃ長期戦なるわ…という感じですね。

　

弊社、会社の規模も200名いかないぐらいのニッチトップ企業なので、どうしても入社において疑念を持たれてしまうのはやむを得ないのですが、なかなか現実的に入社辞退を伺うと辛いものがありましたね…

== 採用活動において色々感じたこと

採用活動において、色々と感じた事や、ネックになった事をここからは記載します。

=== 応募書類のジャッジをどこでやるか

エンジニアの入社において、応募された会社や紹介会社が応募書類のジャッジをするケースは以下3点に集約されると思います。

 * 紹介会社・エージェントが書類をはねる
 * 応募された会社の人事が書類をはねる
 * 応募された会社のエンジニアが書類をはねる

弊社の場合は前述のとおり、エンジニアサイドで応募書類をジャッジしていました。

　

「人事はあくまで人事のスペシャリストであって、技術のことはよくわからんからよろしく！」との事でした。非常に的を得ていると思います（笑）

=== 人材紹介会社のエージェントも玉石混交である

私の方で応募書類ジャッジをする関係で、人材紹介会社のエージェントとも私主導で内容を詰めていきました。

　

人材紹介会社によってはエンジニア専門の部署があるところもあるようなのですが、そういうところは比較的話を詰めていきやすかったです。

ただ、エンジニアとして第一線で勝負できるのであれば、普通ならそもそもエンジニアとして仕事をしているはず（結構人材紹介会社のエージェントは薄給かつ激務のようで、人の入れ替わりが激しいようなんですよね…）だと考えられ、そんなに話が全部通じるわけでもなかったです。

　

私は前職がSIerだったのでそういった人に説明するのもあまり苦はなかったのですが、実際の肌感覚としてはエージェントについては@<b>{非IT部門のエンドユーザー}ぐらいの知識、感覚しか持ち得ていない前提の上で、丁寧に説明をしたほうが良いように思いました。

=== フィルタリングのハードルを下げると応募は増えるのだが

弊社の場合、応募者はそんないっぱい来る感じでもなかったことから、
ハードルを大分下げてあまりにひどいのでなければ人材紹介会社から
応募書類をそのまま極力送ってもらうようにしていました。

　

結果、どうなったかというと応募書類のレベルが下がりました。

といっても月3件程度でしたので、私が見る分には影響はほぼなかったのですが、応募者サイドとしてはハードルを下げるとノイズが増える事は認識しておいたほうが良いかもしれません。

== 応募者の応募書類について

応募者の応募書類については色々思うところがありました。

　

まず就職・転職などで会社に応募される方に知っておいてほしいのは、だいたいの会社組織は@<b>{採用を通してしまうと通したなりの説明責任が通した人にかかってくる事がある}という点です。

=== 不整合がある応募書類は辛い

まず見ていてつらかったのは、@<b>{学校の専攻名が違うケース、履歴書・業務経歴書間の不整合（時系列的に矛盾がある）}です。
これが一本ちゃんと筋が通っていないという事は

 * 時間をかけても精度の高いコードやドキュメントを書けない可能性が…
 * 自分がどういう経験を得て来たか説明も怪しい…

ということにどうしてもなってしまいますし、説明責任の観点からいうと、これは正直通せないです。

=== 既卒として採用するメリットが薄い人は辛い

次によく見られたケースで悩ましかったのは、その人を@<b>{既卒として採用するメリットが薄い}ケースです。

ITはたしかにドッグイヤーと言われるように技術の変化が早く、移り変わりも早いとは言われていますが、実は変化の遅い分野もないわけではないです。

 * 変化の遅い（というか変化しようがない）
    ** 宇宙の法則に縛られる系
      *** 制御系における慣性の法則みたいな物理の話
      *** 同じ周波数で電波放射したら通信障害おきるとか電磁気学の話
      *** MTBFとMTTRみたいな信頼性工学の話
      *** DBの正規化理論に代表されるデータベース工学の話
      *** カラーユニバーサルデザインに代表される認知系の話
 * 変化はまあまあ遅い（変化しないわけではないが…）
    ** 規格化しているものやデファクトスタンダード
      *** アルゴリズム周りの知見とか
      *** TCP/IPプロトコルのメジャーどころの奴とかOSI7層モデルとか（HTTP/3はそれだけ激震だったという話ではあります。）
      *** メジャー言語の立ち位置を獲得して10年以上元気な言語環境系（C#とかJavaとかRubyとかPythonとか）
      *** 簿記会計とか
 * 変化は早い
    ** ほげほげフレームワークとか…

で、ここらへんをまんべんなく拾えているんじゃないかなという評価を採用サイドからしやすいのは、どうしてもCSの学位だったり、IPAの情報処理技術者試験合格者になってしまうのですよね…(上のリストにはIPAの情報処理技術者試験で問われにくい角度の話もあえて載せています。)

　

新卒の人に対する既卒のメリットというのは、極論を言ってしまうと「新卒の人よりトレーニングコストが安くて実業務にすぐ寄与してもらえる（≒即戦力になる）」点なのですが、正社員として無期雇用契約を結ぶのであれば、即戦力でその時だけは役に立つけれど、すぐ失速してもらうような人でも結構困ってしまう面があって、少なくとも@<b>{基礎がしっかりしていないと長期に渡ってエンジニアとして会社に寄与して貰うのは厳しいのでは}ないかな…という印象になってしまいます。

　

あと、そういった評価になるのを懸念して自己PRに「スキルにキャッチアップして…」みたいな事を記載する人がままあるのですが、客観的に説明できないPRは±0かむしろ逆効果なケースすらあります。

なにかキャッチアップをしているのであれば、客観的なアウトプット（資格などの具体的なハードルがあるものでも良いですが、noteやQiitaでもいいでしょうし、GitHubでもいいでしょう。もちろん技術同人誌もね！）を記載すべきではないかなという気がします。

　

こういった客観的な証左を書かずに万全と「キャッチアップ…」と書いてしまうのは、少し厳しい言い方になってしまいますが、さながらテストをしたと言っているのにテストエビデンスがなかったり、CI環境下なのにテスト一切書いてなかったりするレベルだと心得たほうが良いように思います。

=== 仕事続かなさそうな人は辛い

仮に人材紹介会社経由で採用した場合、想定年収の35％～40％程度が採用した会社から人材紹介会社に紹介フィーとして支払われます。

なので、1年以内に退職した場合は半額戻ってくるみたいな制度もないわけではないのですが、1年経ったぐらいで辞められると普通に100万レベルの損害が出てしまうのですよね…

　

最近リファラル採用やカジュアル面談からの採用活動が多くなっているのはそういう事情もあったりします。

なので、勤続年数が低い人はどうしても採用しづらくなるケースがあります。心を病むレベルの職場に3年いろとかそういう事を言いたいわけでもないのですが、転職のペースが早いとどうしてもそういう懸念は抱かれる可能性があります。

=== 社内のメンターより明らかに年上の人はつらい

ちょっと年上だとどうしても指導しにくいです。それ以上に後進を育成して会社の体制を強化したいケースだとまず入らないですね。

逆に欠員が出て穴埋めで急いでいる場合は年齢似ギャップがあっても採用として通るケースはままあります。(つまり、転職後結構しんどいかもしれません。)

===[column] 非常に困った応募者の話

今回の採用で、一人強烈なスキルスタックの方がおられたのですがお断りしました。

その人、SAPのカスタマイズエンジニアだったんですよね。しかも得意分野が生産管理系。

弊社、あいにく工場とか生産機能ないんですよ…（＾＾；

　

人材紹介会社に「もっとうちより待遇・給与面で出せるところいくらでもあるだろうからちゃんと探して紹介してあげてください。なぜうちなの？」って返しましたとさ…

　

ちなみにSAPはABAPという言語を使ってカスタマイズするのですが、SAP社が言語をずっとそのまま使える形でパッケージを維持し続けてくれているという特異な環境でして、最新のSAP HANAでもABAPがガンガン動くようになっています。

===[/column]


== 応募者の応募書類で求めていたもの

結局応募者の応募書類を見ていく中で、色々と感じた事があります。

こういった要素に気をつける事で、書類選考の通過率は結構激変するような気がします。

=== 書類には時間をかけよう。可能ならレビューしてもらおう

まず応募書類に結構多くの人が時間を割かずに出してしまっている
印象を受けました。可能であれば転職活動のことを同じ会社の第三者の人に伝えられないような人（≒同じ会社の人じゃないほうが良い）に、
職務経歴書のレビューを受けるのが理想です。

　

せめてそれが無理であれば一晩寝かせて見直すとか、一週間寝かせて見直す　ぐらいの対応を取ったほうがいいでしょう。

=== あなたを採用するメリットがわかるようにしよう

既卒者を採用するメリットは先にも述べましたが「社会人としての経験・蓄積を得ている事」になります。

裏を返せば@<b>{基礎から教えている余裕はない}という事でもあります。

ここでいう基礎というのは、会社独自のルールは指しておらず、あくまで@<b>{社会人としての基礎}（例えば電話応対、名刺交換、報連相、5Ｓなど）、@<b>{プロフェッショナルとしての基礎}の部分（IT関係で言えばCSや基本情報・ITパスポートぐらいの知識）になります。

逆に会社の@<b>{ローカルルールや特殊な業務知識}については、入社前から知っている事を求められる環境というのは普通であればほぼありえ無いといって良いでしょう。普通は周りの先輩から@<b>{入社後にキャッチアップしてもらえる}ものです。

さて、この社会人としての経験の蓄積はどう応募書類に反映させれば良いのでしょうか？

　

いくつか例を挙げてみましょう。

 * 資格などを取得して客観的に蓄積を示す

まあこれができると苦労はないです。でもなかなか取れませんよね。こういう資格などの客観指標が薄めの人は次のような手があります。

 * 各プロジェクトでの業務従事内容からエンジニアとしての能力の蓄積を示す

文章で見てもよくわかりませんよね。例をあげましょう。

//table{
時期	職務内容
----------------------------------------------------
3年ぐらい前	○○システムつくってた
2年ぐらい前	▲▲システムつくってた
1年ぐらい前	■■システムつくってた
//}

これだとシステムを作っていた事しかわかりませんね。

ですが、次のような形だとどうでしょうか？

//table{
時期	職務内容
----------------------------------------------------
3年ぐらい前	○○システム開発に単体～結合テスト工程で参画
2年ぐらい前	▲▲システム開発に詳細設計～結合テスト工程で参画
1年ぐらい前	■■システム開発に基本設計～結合テスト工程で参画
//}

システム開発におけるV字型モデルの、上流工程での作業にどんどんシフトしている事が読み取れますね。つまりこういった書き方をする事で、あなたがエンジニアとして成長し、より高いレベルでの仕事に遷移していっている事を示せるわけです。

 * 職格の変化からエンジニアとしての能力の蓄積を示す

前項のように業務内容に変化がある場合は良いのですが、小規模プロジェクトを繰り返していて変化を例示しにくい時は、別の角度から成長を示す事もできます。

//table{
時期	職格	職務内容
----------------------------------------------------
5年ぐらい前	　	○○システム開発に参画
3年ぐらい前	主任	▲▲システム開発に参画
1年ぐらい前	グループリーダー	■■システム開発に参画
//}



こういう形であれば、例えば会社での評価があり、職格が変化していると読み取る事ができますね。

　

自らの成長曲線を応募書類を通じて表現できると刺さる応募書類になります。試してみてくださいね。

== おわりに

今回の採用活動で、一度採用側に立つと見えてないものが一気に見えてくるものだなあと非常に思うところがありました。

　

この内容が見ていただいたあなたの参考になれば幸いです。
