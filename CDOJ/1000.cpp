#include <stdio.h>

int main()
{
	int a;
	const int s[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 134903170, 836311903, 971215073, 807526976, 778742049, 586269025, 365011074, 951280099, 316291173, 267571272, 583862445, 851433717, 435296162, 286729879, 722026041, 8755920, 730781961, 739537881, 470319842, 209857723, 680177565, 890035288, 570212853, 460248141, 30460994, 490709135, 521170129, 11879264, 533049393, 544928657, 77978050, 622906707, 700884757, 323791464, 24676221, 348467685, 373143906, 721611591, 94755497, 816367088, 911122585, 727489673, 638612258, 366101931, 4714189, 370816120, 375530309, 746346429, 121876738, 868223167, 990099905, 858323072, 848422977, 706746049, 555169026, 261915075, 817084101, 78999176, 896083277, 975082453, 871165730, 846248183, 717413913, 563662096, 281076009, 844738105, 125814114, 970552219, 96366333, 66918552, 163284885, 230203437, 393488322, 623691759, 17180081, 640871840, 658051921, 298923761, 956975682, 255899443, 212875125, 468774568, 681649693, 150424261, 832073954, 982498215, 814572169, 797070384, 611642553, 408712937, 20355490, 429068427, 449423917, 878492344, 327916261, 206408605, 534324866, 740733471, 275058337, 15791808, 290850145, 306641953, 597492098, 904134051, 501626149, 405760200, 907386349, 313146549, 220532898, 533679447, 754212345, 287891792, 42104137, 329995929, 372100066, 702095995, 74196061, 776292056, 850488117, 626780173, 477268290, 104048463, 581316753, 685365216, 266681969, 952047185, 218729154, 170776339, 389505493, 560281832, 949787325, 510069157, 459856482, 969925639, 429782121, 399707760, 829489881, 229197641, 58687522, 287885163, 346572685, 634457848, 981030533, 615488381, 596518914, 212007295, 808526209, 20533504, 829059713, 849593217, 678652930, 528246147, 206899077, 735145224, 942044301, 677189525, 619233826, 296423351, 915657177, 212080528, 127737705, 339818233, 467555938, 807374171, 274930109, 82304280, 357234389, 439538669, 796773058, 236311727, 33084785, 269396512, 302481297, 571877809, 874359106, 446236915, 320596021, 766832936, 87428957, 854261893, 941690850, 795952743, 737643593, 533596336, 271239929, 804836265, 76076194, 880912459, 956988653, 837901112, 794889765, 632790877, 427680642, 60471519, 488152161, 548623680, 36775841, 585399521, 622175362, 207574883, 829750245, 37325128, 867075373, 904400501, 771475874, 675876375, 447352249, 123228624, 570580873, 693809497, 264390370, 958199867, 222590237, 180790104, 403380341, 584170445, 987550786, 571721231, 559272017, 130993248, 690265265, 821258513, 511523778, 332782291, 844306069, 177088360, 21394429, 198482789, 219877218, 418360007, 638237225, 56597232, 694834457, 751431689, 446266146, 197697835, 643963981, 841661816, 485625797, 327287613, 812913410, 140201023, 953114433, 93315456, 46429889, 139745345, 186175234, 325920579, 512095813, 838016392, 350112205, 188128597, 538240802, 726369399, 264610201, 990979600};
	while(scanf("%d", &a) == 1)
	{
		printf("%09d\n", s[a]);
	}
	return 0;
}