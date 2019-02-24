#include <iostream>
//#include <string_view>
#include <chrono>
#include <thread>
#include <conio.h>//環境依存

bool TimedQuestion(const std::string S,const std::chrono::milliseconds Time) {

	std::cout << S.c_str() << std::endl;

	std::this_thread::sleep_for(Time);


	return true;
}

bool WaitableQuestion(const std::string& S) {

	std::cout << S.c_str() << std::endl << "plz hit key." << std::endl;

	_getch();

	return true;

}

bool TimeWaiting(const std::chrono::milliseconds Time) {

	std::this_thread::sleep_for(Time);
	return true;
}

bool NewLine() {
	std::cout << std::endl;

	return true;
}

bool SimpleQuestion(const std::string& S) {
	std::cout << S.c_str() << std::endl;

	return true;
}

bool ShowQuestion() {
	std::chrono::milliseconds Wait(3000);
	std::chrono::milliseconds sw(3500);
	std::chrono::milliseconds end(5000);
	std::chrono::milliseconds Temp(1000);


	SimpleQuestion("*ナイヤガラもどき*"); NewLine();
	SimpleQuestion("これから質問をします。準備ができたら何かのキーを押してください。"); NewLine();
	SimpleQuestion("このアプリケーションをやめたいと思ったときはこのアプリケーションを終了してください。"); NewLine();
	WaitableQuestion("ザクザク行きますよ。あわててもしりませんからね～～。"); NewLine();
	NewLine(); NewLine(); NewLine();
	///

	TimedQuestion("ハンドルネームはありますか？", Wait); NewLine();
	TimedQuestion("悩んでいますか？", Wait); NewLine();
	TimedQuestion("自分で悩みを解けそうですか？", Wait); NewLine();
	TimedQuestion("それはおいといて、できそうなことを思えますか？", Wait); NewLine();
	TimedQuestion("それはやめたいですか？", Wait); NewLine(); NewLine();

	SimpleQuestion("そうですか。。。"); NewLine();
	WaitableQuestion("質問は以上です。"); NewLine();

	WaitableQuestion("ここからは余談です。"); NewLine();

	TimedQuestion("最近、実家が壊れまして、いろんな意志がやってくるのです。", sw);
	TimedQuestion("コンピュータによって人格まで壊れる話があるかどうかはわかりません。", sw);
	TimedQuestion("彼らの意志は確かではあるのですが、私から見れば同族ではないのです。", sw);
	TimedQuestion("彼らは彼らの任によってやってくるのですが、どれもマチマチです。", sw);
	TimedQuestion("一つ共通しているのが、他所との副作用についてです。", sw);
	TimedQuestion("彼らは、私のハンバーガーの味覚を破壊しました。マクドナルド、いいですよね！", sw);
	TimedQuestion("私からお願いしたいことがいくつかあります。", sw);

	NewLine();NewLine();
	//

	WaitableQuestion("実家にエフェクトを飛ばないようにできないでしょうか。"); NewLine();
	WaitableQuestion("うちの思考構造が破壊されたのですが、以前の状態にロールバックできないでしょうか。なお、リザレクションは望んでいません。"); NewLine();
	WaitableQuestion("他所の意志たちの来訪頻度を下げてもらえないでしょうか。最終的にはなくしたいと思っています。"); NewLine();
	WaitableQuestion("その他、身体に微量でも影響のある攻撃を一切やめてもらえないでしょうか。"); NewLine();
	WaitableQuestion("時間や時計が法則的に壊れたので直せないでしょうか。"); NewLine();

	TimedQuestion("現状の短時間で思いつくのはこの辺です。", Wait); NewLine();

	WaitableQuestion("伝えたいことはまだあったのですが、きれたので今回はここまでです。"); NewLine();
	TimedQuestion("なお、アイディアの源泉は無限ではないので、ヒントを置いておきます。", sw);
	TimedQuestion("一つ目：https://www.pixiv.net/member.php?id=38101579", sw);
	TimedQuestion("二つ目：http://3d.nicovideo.jp/users/3989849", sw); NewLine(); NewLine();
	WaitableQuestion("見るか見ないかはあなた次第。見てからでは遅いのです。");
	NewLine(); NewLine(); NewLine();
	SimpleQuestion("あ、そうそう。プログラミングのライブラリがたらいまわしになると副作用が増えたりしないでしょうか。");
	NewLine();

	TimeWaiting(Temp);

	TimedQuestion("というわけで、お時間です。\nさようなら。", end);
	SimpleQuestion("ないあがら～～～");

	return true;
}

int main() {
	ShowQuestion();

	return 0;
}