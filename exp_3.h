//
// Created by joker on 2017/11/17.
//

#ifndef DATA_STRUCTURE_EXP_EXP_3_H
#define DATA_STRUCTURE_EXP_EXP_3_H

#include <iostream>
#include <functional>
#include <bitset>
#include <sstream>
#include "huffman.h"
#include "bin_tree.h"
#include "bst.h"

template<class T, class CharT = char>
void pre_order_init(std::basic_istream<CharT> &in,
	bin_tree<T> &new_tree, const T &sepreator) {
	new_tree.pre_order_init(in, sepreator);
}

inline void run_exp3_tests() {
	using std::cout;
	using std::endl;
	using std::bitset;

	cout << endl << "Exp 3 :binary trees" << endl << endl;
	cout << "Test huffman tree" << endl;

	auto res = huffman<char>(
		"President Pitzer, Mr. Vice President, Governor, Congressman Thomas, Senator Wiley, and Congressman Miller, Mr. Webb, Mr. Bell, scientists, distinguished guests, and ladies and gentlemen:\n"
		"\n"
		"I appreciate your president having made me an honorary visiting professor, and I will assure you that my first lecture will be very brief.\n"
		"\n"
		"I am delighted to be here, and I'm particularly delighted to be here on this occasion.\n"
		"\n"
		"We meet at a college noted for knowledge, in a city noted for progress, in a State noted for strength, and we stand in need of all three, for we meet in an hour of change and challenge, in a decade of hope and fear, in an age of both knowledge and ignorance. The greater our knowledge increases, the greater our ignorance unfolds.\n"
		"\n"
		"Despite the striking fact that most of the scientists that the world has ever known are alive and working today, despite the fact that this Nation1s own scientific manpower is doubling every 12 years in a rate of growth more than three times that of our population as a whole, despite that, the vast stretches of the unknown and the unanswered and the unfinished still far outstrip our collective comprehension.\n"
		"\n"
		"No man can fully grasp how far and how fast we have come, but condense, if you will, the 50,000 years of man1s recorded history in a time span of but a half-century. Stated in these terms, we know very little about the first 40 years, except at the end of them advanced man had learned to use the skins of animals to cover them. Then about 10 years ago, under this standard, man emerged from his caves to construct other kinds of shelter. Only five years ago man learned to write and use a cart with wheels. Christianity began less than two years ago. The printing press came this year, and then less than two months ago, during this whole 50-year span of human history, the steam engine provided a new source of power.\n"
		"\n"
		"Newton explored the meaning of gravity. Last month electric lights and telephones and automobiles and airplanes became available. Only last week did we develop penicillin and television and nuclear power, and now if America's new spacecraft succeeds in reaching Venus, we will have literally reached the stars before midnight tonight.\n"
		"\n"
		"This is a breathtaking pace, and such a pace cannot help but create new ills as it dispels old, new ignorance, new problems, new dangers. Surely the opening vistas of space promise high costs and hardships, as well as high reward.\n"
		"\n"
		"So it is not surprising that some would have us stay where we are a little longer to rest, to wait. But this city of Houston, this State of Texas, this country of the United States was not built by those who waited and rested and wished to look behind them. This country was conquered by those who moved forward--and so will space.\n"
		"\n"
		"William Bradford, speaking in 1630 of the founding of the Plymouth Bay Colony, said that all great and honorable actions are accompanied with great difficulties, and both must be enterprised and overcome with answerable courage.\n"
		"\n"
		"If this capsule history of our progress teaches us anything, it is that man, in his quest for knowledge and progress, is determined and cannot be deterred. The exploration of space will go ahead, whether we join in it or not, and it is one of the great adventures of all time, and no nation which expects to be the leader of other nations can expect to stay behind in the race for space.\n"
		"\n"
		"Those who came before us made certain that this country rode the first waves of the industrial revolutions, the first waves of modern invention, and the first wave of nuclear power, and this generation does not intend to founder in the backwash of the coming age of space. We mean to be a part of it--we mean to lead it. For the eyes of the world now look into space, to the moon and to the planets beyond, and we have vowed that we shall not see it governed by a hostile flag of conquest, but by a banner of freedom and peace. We have vowed that we shall not see space filled with weapons of mass destruction, but with instruments of knowledge and understanding.\n"
		"\n"
		"Yet the vows of this Nation can only be fulfilled if we in this Nation are first, and, therefore, we intend to be first. In short, our leadership in science and in industry, our hopes for peace and security, our obligations to ourselves as well as others, all require us to make this effort, to solve these mysteries, to solve them for the good of all men, and to become the world's leading space-faring nation.\n"
		"\n"
		"We set sail on this new sea because there is new knowledge to be gained, and new rights to be won, and they must be won and used for the progress of all people. For space science, like nuclear science and all technology, has no conscience of its own. Whether it will become a force for good or ill depends on man, and only if the United States occupies a position of pre-eminence can we help decide whether this new ocean will be a sea of peace or a new terrifying theater of war. I do not say the we should or will go unprotected against the hostile misuse of space any more than we go unprotected against the hostile use of land or sea, but I do say that space can be explored and mastered without feeding the fires of war, without repeating the mistakes that man has made in extending his writ around this globe of ours.\n"
		"\n"
		"There is no strife, no prejudice, no national conflict in outer space as yet. Its hazards are hostile to us all. Its conquest deserves the best of all mankind, and its opportunity for peaceful cooperation many never come again. But why, some say, the moon? Why choose this as our goal? And they may well ask why climb the highest mountain? Why, 35 years ago, fly the Atlantic? Why does Rice play Texas?\n"
		"\n"
		"We choose to go to the moon. We choose to go to the moon in this decade and do the other things, not because they are easy, but because they are hard, because that goal will serve to organize and measure the best of our energies and skills, because that challenge is one that we are willing to accept, one we are unwilling to postpone, and one which we intend to win, and the others, too.\n"
		"\n"
		"It is for these reasons that I regard the decision last year to shift our efforts in space from low to high gear as among the most important decisions that will be made during my incumbency in the office of the Presidency.\n"
		"\n"
		"In the last 24 hours we have seen facilities now being created for the greatest and most complex exploration in man's history. We have felt the ground shake and the air shattered by the testing of a Saturn C-1 booster rocket, many times as powerful as the Atlas which launched John Glenn, generating power equivalent to 10,000 automobiles with their accelerators on the floor. We have seen the site where the F-1 rocket engines, each one as powerful as all eight engines of the Saturn combined, will be clustered together to make the advanced Saturn missile, assembled in a new building to be built at Cape Canaveral as tall as a 48 story structure, as wide as a city block, and as long as two lengths of this field.\n"
		"\n"
		"Within these last 19 months at least 45 satellites have circled the earth. Some 40 of them were \"made in the United States of America\" and they were far more sophisticated and supplied far more knowledge to the people of the world than those of the Soviet Union.\n"
		"\n"
		"The Mariner spacecraft now on its way to Venus is the most intricate instrument in the history of space science. The accuracy of that shot is comparable to firing a missile from Cape Canaveral and dropping it in this stadium between the the 40-yard lines.\n"
		"\n"
		"Transit satellites are helping our ships at sea to steer a safer course. Tiros satellites have given us unprecedented warnings of hurricanes and storms, and will do the same for forest fires and icebergs.\n"
		"\n"
		"We have had our failures, but so have others, even if they do not admit them. And they may be less public.\n"
		"\n"
		"To be sure, we are behind, and will be behind for some time in manned flight. But we do not intend to stay behind, and in this decade, we shall make up and move ahead.\n"
		"\n"
		"The growth of our science and education will be enriched by new knowledge of our universe and environment, by new techniques of learning and mapping and observation, by new tools and computers for industry, medicine, the home as well as the school. Technical institutions, such as Rice, will reap the harvest of these gains.\n"
		"\n"
		"And finally, the space effort itself, while still in its infancy, has already created a great number of new companies, and tens of thousands of new jobs. Space and related industries are generating new demands in investment and skilled personnel, and this city and this State, and this region, will share greatly in this growth. What was once the furthest outpost on the old frontier of the West will be the furthest outpost on the new frontier of science and space. Houston, your City of Houston, with its Manned Spacecraft Center, will become the heart of a large scientific and engineering community. During the next 5 years the National Aeronautics and Space Administration expects to double the number of scientists and engineers in this area, to increase its outlays for salaries and expenses to $60 million a year; to invest some $200 million in plant and laboratory facilities; and to direct or contract for new space efforts over $1 billion from this Center in this City.\n"
		"\n"
		"To be sure, all this costs us all a good deal of money. This year1s space budget is three times what it was in January 1961, and it is greater than the space budget of the previous eight years combined. That budget now stands at $5,400 million a year--a staggering sum, though somewhat less than we pay for cigarettes and cigars every year. Space expenditures will soon rise some more, from 40 cents per person per week to more than 50 cents a week for every man, woman and child in the United Stated, for we have given this program a high national priority--even though I realize that this is in some measure an act of faith and vision, for we do not now know what benefits await us.\n"
		"\n"
		"But if I were to say, my fellow citizens, that we shall send to the moon, 240,000 miles away from the control station in Houston, a giant rocket more than 300 feet tall, the length of this football field, made of new metal alloys, some of which have not yet been invented, capable of standing heat and stresses several times more than have ever been experienced, fitted together with a precision better than the finest watch, carrying all the equipment needed for propulsion, guidance, control, communications, food and survival, on an untried mission, to an unknown celestial body, and then return it safely to earth, re-entering the atmosphere at speeds of over 25,000 miles per hour, causing heat about half that of the temperature of the sun--almost as hot as it is here today--and do all this, and do it right, and do it first before this decade is out--then we must be bold.\n"
		"\n"
		"I'm the one who is doing all the work, so we just want you to stay cool for a minute. [laughter]\n"
		"\n"
		"However, I think we're going to do it, and I think that we must pay what needs to be paid. I don't think we ought to waste any money, but I think we ought to do the job. And this will be done in the decade of the sixties. It may be done while some of you are still here at school at this college and university. It will be done during the term of office of some of the people who sit here on this platform. But it will be done. And it will be done before the end of this decade.\n"
		"\n"
		"I am delighted that this university is playing a part in putting a man on the moon as part of a great national effort of the United States of America.\n"
		"\n"
		"Many years ago the great British explorer George Mallory, who was to die on Mount Everest, was asked why did he want to climb it. He said, \"Because it is there.\"\n"
		"\n"
		"Well, space is there, and we're going to climb it, and the moon and the planets are there, and new hopes for knowledge and peace are there. And, therefore, as we set sail we ask God's blessing on the most hazardous and dangerous and greatest adventure on which man has ever embarked.\n"
		"\n"
		"Thank you.");
	std::stringstream outss, inss;
	res.write(outss);
	//    cout << "Char counts" << endl;
	//    for (auto &&x:res.counts()) {
	//        cout << x.first << ":" << x.second << endl;
	//    }
	cout << "Encoding" << endl;
	for (auto &&x : res.encoding()) {
		cout << x.first << ":" << bitset<32>(x.second) << endl;
	}
	//    cout<<"Code:"<<outss.str()<<endl;
	cout << "Code length:" << outss.str().size() << endl;
	cout << "Original length:" << res.str().size() << endl;
	cout << "Compression rate:" << ((double)outss.str().size()) / res.str().size() << endl;
	//    cout << "Original string: " << res.str() << endl;
	huffman<char>::read(outss, inss);
	cout << "Out:" << inss.str() << endl;
	bin_tree<char> char_tree;
	std::stringstream ss("abc##de#g##f###");
	cout << "Test traverse" << endl;
	cout << "Input: " << ss.str() << endl;
	pre_order_init<char>(ss, char_tree, '#');
	auto visit = [](char x) {
		cout << x << " ";
	};
	cout << "Pre order :" << endl;
	char_tree.trav_pre_order(visit);
	cout << endl;
	cout << "In order  :" << endl;
	char_tree.trav_in_order(visit);
	cout << endl;
	cout << "Post order :" << endl;
	char_tree.trav_post_order(visit);
	cout << endl;
	cout << "Level      :" << endl;
	char_tree.trav_level(visit);
	cout << endl;

	cout << "Test BST" << endl;
	auto bst_visit = [&](int x) { cout << x << " "; };
	bst<int> bstree;
	vector<int> toInsert{ 11, 2, 3, 42,
						 4, 6, 7, 42,
						 423, 433, 654, 765,
						 43, 4, 53, 454, 5 };
	for (auto x : toInsert) {
		cout << "Insert " << x;
		cout << " Pos: " << bstree.insert(x) << endl;
	}
	cout << "Insert Complete" << endl;
	bstree.for_each(bst_visit);
	cout << endl;
	for (int i = 5; i < 10; ++i) {
		cout << "Erase " << i << " ";
		cout << std::boolalpha << bstree.erase(i) << endl;
		bstree.for_each(bst_visit);
		cout << endl;
	}

	cout << "Sort from biggest to smallest:" << endl;
	bst<int, std::greater<>> big_tree{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	big_tree.for_each(bst_visit);
	cout << endl;
};


#endif //DATA_STRUCTURE_EXP_EXP_3_H
