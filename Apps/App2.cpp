#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <codecvt>
using namespace std;

int main() 

{
	wifstream ifs("text.txt");
	ofstream ofs("output.txt");
	locale utf8_locale(locale(), new codecvt_utf8<wchar_t>);
	ifs.imbue(utf8_locale);
	wchar_t bom = L'\0';
	ifs.get(bom);
		wstring line;
	 do {
	     for (unsigned $ = 0; $ < line.length(); ++$)
	     {
                if ( line[$] == L'י' && line[$+1] == L'ה' && line[$+2] == L'ו' && line[$+3] == L'ה')
                {
                    ofs <<  "አዶናይ" ;
                }
                else if (line[$] == L'ָ' && line[$-1] != L'ה' && line[$-1] != L'ח' && line[$-1] != L'כ' && line[$-2] != L'ב' && line[$-2] != L'מ' && line[$-1] != L'מ' && line[$-2] != L'נ' && line[$-1] != L'נ' && line[$-1] != L'ו' && line[$-1] != L'ע' && line[$+1] != L'ע')
                {
                    ofs <<  "ዓ" ;
                }
                else if (line[$] == L'ו'  &&   line[$+1] == L'ָ')
                {
                    ofs <<  "ዓ" ;
                }
                else if ( line[$] == L'ו' && line[$-1] != L' ' &&  line[$+1] != L'ּ' && line[$+1] != L'ֹ' )
                {
                    ofs <<  "ቭ" ;
                }
                else if (line[$] == L'ה'  &&   line[$+1] == L'ו' && line[$+2] != L'ּ')
                {
                    ofs <<  "ህ" ;
                }
                else if (line[$] == L'ח'  &&   line[$+1] == L'ו')
                {
                    ofs <<  "ኽ" ;
                }

                else if (line[$] == L'ה'  &&  line[$+1]  == L'ָ' )
                {
                    ofs <<  "ሃ" ;
                }
                else if (line[$] == L'ח'  &&  line[$+1]  == L'ָ' )
                {
                    ofs <<  "ኻ" ;
                }
                else if (line[$] == L'ַ' && line[$-1] != L'ה' && line[$-1] != L'ח' && line[$-1] != L'כ' && line[$-2] != L'ב' && line[$-2] != L'מ' && line[$-1] != L'מ' && line[$-2] != L'נ' && line[$-1] != L'נ' && line[$-1] != L'ו' && line[$-1] != L'ע' && line[$+1] != L'ע')
                {
                    ofs <<  "አ" ;
                }
                else if (line[$] == L'ו'  &&   line[$+1] == L'ַ')
                {
                    ofs <<  "አ" ;
                }
                else if (line[$] == L'ה'  &&   line[$+1] == L'ַ')
                {
                    ofs <<  "ሃ" ;
                }
                else if (line[$] == L'ח'  &&   line[$+1] == L'ַ')
                {
                    ofs <<  "ኻ" ;
                }
                                else if (line[$] == L'ֱ' && line[$-1] != L'ה' && line[$-1] != L'ח' && line[$-1] != L'כ' && line[$-2] != L'ב' && line[$-2] != L'מ' && line[$-1] != L'מ' && line[$-2] != L'נ' && line[$-1] != L'נ' && line[$-1] != L'ו')
                {
                    ofs <<  "ኤ" ;
                }
                else if (line[$] == L'ו'  &&   line[$+1] == L'ֱ')
                {
                    ofs <<  "ኤ" ;
                }
                else if (line[$] == L'ה'  &&  line[$+1]  == L'ֱ' )
                {
                    ofs <<  "ሄ" ;
                }
                else if (line[$] == L'ח'  &&  line[$+1]  == L'ֱ' )
                {
                    ofs <<  "ኼ" ;
                }
                else if (line[$] == L'ֲ' && line[$-1] != L'ה' && line[$-1] != L'ח' && line[$-1] != L'כ' && line[$-2] != L'ב' && line[$-2] != L'מ' && line[$-1] != L'מ' && line[$-2] != L'נ' && line[$-1] != L'נ' && line[$-1] != L'ו' && line[$-1] != L'ע' && line[$+1] != L'ע')
                {
                    ofs <<  "ኣ" ;
                }
                else if (line[$] == L'ו'  &&   line[$+1] == L'ֲ')
                {
                    ofs <<  "ኣ" ;
                }
                else if (line[$] == L'ה'  &&   line[$+1] == L'ֲ')
                {
                    ofs <<  "ኃ" ;
                }
                else if (line[$] == L'ח'  &&   line[$+1] == L'ֲ')
                {
                    ofs <<  "ኻ" ;
                }

                else if (line[$] == L'ֳ' && line[$-1] != L'ה' && line[$-1] != L'ח' && line[$-1] != L'כ' && line[$-2] != L'ב' && line[$-2] != L'מ' && line[$-1] != L'מ' && line[$-2] != L'נ' && line[$-1] != L'נ' && line[$-1] != L'ו' && line[$-1] != L'ע' && line[$+1] != L'ע')
                {
                    ofs <<  "ዐ" ;
                }
                else if (line[$] == L'ו'  &&   line[$+1] == L'ֳ')
                {
                    ofs <<  "ዐ" ;
                }
                else if (line[$] == L'ה'  &&  line[$+1]  == L'ֳ' )
                {
                    ofs <<  "ሃ" ;
                }
                else if (line[$] == L'ח'  &&  line[$+1]  == L'ֳ' )
                {
                    ofs <<  "ኻ" ;
                }
                else if (line[$] == L'ִ' && line[$-1] != L'ה' && line[$-1] != L'ח' && line[$-1] != L'כ' && line[$-2] != L'ב' && line[$-2] != L'מ' && line[$-1] != L'מ' && line[$-2] != L'נ' && line[$-1] != L'נ' )
                {
                    ofs <<  "ኢ" ;
                }
                else if (line[$] == L'ו'  &&   line[$+1] == L'ִ')
                {
                    ofs <<  "ኢ" ;
                }
                else if (line[$] == L'ה'  &&   line[$+1] == L'ִ')
                {
                    ofs <<  "ሂ" ;
                }
                else if (line[$] == L'ח'  &&   line[$+1] == L'ִ')
                {
                    ofs <<  "ኺ" ;
                }

                else if (line[$] == L'ֵ' && line[$-1] != L'ה' && line[$-1] != L'ח' && line[$-1] != L'כ' && line[$-2] != L'ב' && line[$-2] != L'מ' && line[$-1] != L'מ' && line[$-2] != L'נ' && line[$-1] != L'נ' && line[$-1] != L'ו')
                {
                    ofs <<  "ዔ" ;
                }
                else if (line[$] == L'ו'  &&   line[$+1] == L'ֵ')
                {
                    ofs <<  "ዔ" ;
                }
                else if (line[$] == L'ה'  &&  line[$+1]  == L'ֵ' )
                {
                    ofs <<  "ሄ" ;
                }
                else if (line[$] == L'ח'  &&  line[$+1]  == L'ֵ' )
                {
                    ofs <<  "ኼ" ;
                }
                else if (line[$] == L'ֶ' && line[$-1] != L'ה' && line[$-1] != L'ח' && line[$-1] != L'כ' && line[$-2] != L'ב' && line[$-2] != L'מ' && line[$-1] != L'מ' && line[$-2] != L'נ' && line[$-1] != L'נ' && line[$-1] != L'ו')
                {
                    ofs <<  "ኤ" ;
                }
                else if (line[$] == L'ו'  &&   line[$+1] == L'ֶ')
                {
                    ofs <<  "ኤ" ;
                }
                else if (line[$] == L'ה'  &&   line[$+1] == L'ֶ')
                {
                    ofs <<  "ሄ" ;
                }
                else if (line[$] == L'ח'  &&   line[$+1] == L'ֶ')
                {
                    ofs <<  "ኼ" ;
                }

                else if (line[$] == L'ֹ' && line[$-1] != L'ה' && line[$-1] != L'ח' && line[$-1] != L'כ' && line[$-2] != L'ב' && line[$-2] != L'מ' && line[$-1] != L'מ' && line[$-2] != L'נ' && line[$-1] != L'נ' && line[$-1] != L'ו')
                {
                    ofs <<  "ኦ" ;
                }
                else if (line[$] == L'ו'  &&   line[$+1] == L'ֹ')
                {
                    ofs <<  "ኦ" ;
                }
                else if (line[$] == L'ה'  &&  line[$+1]  == L'ֹ' )
                {
                    ofs <<  "ሆ" ;
                }
                else if (line[$] == L'ח'  &&  line[$+1]  == L'ֹ' )
                {
                    ofs <<  "ኾ" ;
                }
                else if (line[$] == L'ֻ' && line[$-1] != L'ה' && line[$-1] != L'ח' && line[$-1] != L'כ' && line[$-2] != L'ב' && line[$-2] != L'מ' && line[$-1] != L'מ' && line[$-2] != L'נ' && line[$-1] != L'נ' && line[$-1] != L'ו')
                {
                    ofs <<  "ኡ" ;
                }
                else if (line[$] == L'ו'  &&   line[$+1] == L'ֻ')
                {
                    ofs <<  "ኡ" ;
                }
                else if (line[$] == L'ה'  &&   line[$+1] == L'ֻ')
                {
                    ofs <<  "ሑ" ;
                }
                else if (line[$] == L'ח'  &&   line[$+1] == L'ֻ')
                {
                    ofs <<  "ኹ" ;
                }

                else if ( line[$] == L'ְ' )
                {
                    ofs <<  "" ;
                }

                else if ( line[$] == L' ' && line[$+1] == L'ו' && line[$+2] != L'ּ')
                {
                    ofs <<  " ቨ" ;
                }

                else if ( line[$] == L'ו' && line[$+1] == L'ּ' && line[$-1] != L' ')
                {
                    ofs <<  "ሁ" ;
                }
                else if ( line[$] == L' ' && line[$+1] == L'ו' && line[$+2] == L'ּ')
                {
                    ofs <<  " ኡ" ;
                }
                else if ( line[$] == L'ה'  && line[$+1] != L' ' && line[$+2] != L'ּ')
                {
                    ofs <<  "ህ" ;
                }*/
                else if ( line[$] == L'ש' && line[$+1] == L'ׁ')
                {
                    ofs <<  "ሽ" ;
                }
                else if ( line[$] == L'ש' && line[$+1] == L'ׂ')
                {
                    ofs <<  "ሥ" ;
                }
                else if ( line[$] == L'ש' && line[$+1] == L'ּ' && line[$+2] == L'ׁ' )
                {
                    ofs <<  "ሽ" ;
                }
                else if ( line[$] == L'ש' && line[$+1] == L'ּ' && line[$+2] == L'ׂ' )
                {
                    ofs <<  "ሥ" ;
                }
                else if ( line[$] == L'ש')
                {
                    ofs <<  "ሽ" ;
                }
                else if ( line[$] == L'כ' && line[$+1] == L'ּ' && line[$+2] == L'ָ' && line[$+3] == L'ל')
                {
                    ofs <<  "ክኦ" ;
                }
                else if ( line[$] == L'כ' && line[$+1] == L'ּ' )
                {
                    ofs <<  "ክ" ;
                }
                else if ( line[$] == L'כ' && line[$+1] == L'ָ' && line[$+2] == L'ל' )
                {
                    ofs <<  "ኽኦ" ;
                }

                else if (line[$] == L'כ'  &&  line[$+1]  == L'ַ' )
                {
                    ofs <<  "ኻ" ;
                }
                else if (line[$] == L'כ'  &&  line[$+1]  == L'ָ' )
                {
                    ofs <<  "ኻ" ;
                }
                else if (line[$] == L'כ'  &&  line[$+1]  == L'ֱ' )
                {
                    ofs <<  "ኼ" ;
                }

                else if (line[$] == L'כ'  &&   line[$+1] == L'ֲ')
                {
                    ofs <<  "ኻ" ;
                }
                                else if (line[$] == L'כ'  &&  line[$+1]  == L'ֳ' )
                {
                    ofs <<  "ኻ" ;
                }
                                else if (line[$] == L'כ'  &&   line[$+1] == L'ִ')
                {
                    ofs <<  "ኺ" ;
                }
                                else if (line[$] == L'כ'  &&  line[$+1]  == L'ֵ' )
                {
                    ofs <<  "ኼ" ;
                }
                                else if (line[$] == L'כ'  &&   line[$+1] == L'ֶ')
                {
                    ofs <<  "ኼ" ;
                }
                                else if (line[$] == L'כ'  &&  line[$+1]  == L'ֹ' )
                {
                    ofs <<  "ኾ" ;
                }
                                else if (line[$] == L'כ'  &&   line[$+1] == L'ֻ')
                {
                    ofs <<  "ኹ" ;
                }
                                else if (line[$] == L'כ'  &&   line[$+1] == L'ו')
                {
                    ofs <<  "ኽ" ;
                }
                else if (line[$] == L'כ'  &&   line[$+1] == L'י')
                {
                    ofs <<  "ኽ" ;
                }
                else if (line[$] == L'ב'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ַ' )
                {
                    ofs <<  "ባ" ;
                }
                else if (line[$] == L'ב'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ָ' )
                {
                    ofs <<  "ባ" ;
                }
                else if (line[$] == L'ב'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֱ' )
                {
                    ofs <<  "ቤ" ;
                }
                else if (line[$] == L'ב'  && line[$+1] == L'ּ' &&   line[$+2] == L'ֲ')
                {
                    ofs <<  "ባ" ;
                }
                else if (line[$] == L'ב'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֳ' )
                {
                    ofs <<  "ባ" ;
                }
                else if (line[$] == L'ב'  && line[$+1] == L'ּ' &&   line[$+2] == L'ִ')
                {
                    ofs <<  "ቢ" ;
                }
                else if (line[$] == L'ב'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֵ' )
                {
                    ofs <<  "ቤ" ;
                }
                else if (line[$] == L'ב'  && line[$+1] == L'ּ' &&   line[$+2] == L'ֶ')
                {
                    ofs <<  "ቤ" ;
                }
                else if (line[$] == L'ב'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֹ' )
                {
                    ofs <<  "ቦ" ;
                }
                else if (line[$] == L'ב'  && line[$+1] == L'ּ' &&   line[$+2] == L'ֻ')
                {
                    ofs <<  "ቡ" ;
                }
                else if ( line[$] == L'ב' && line[$+1] == L'ּ')
                {
                    ofs <<  "ብ" ;
                }

                else if (line[$] == L'מ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ַ' )
                {
                    ofs <<  "ማ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ָ' )
                {
                    ofs <<  "ማ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֱ' )
                {
                    ofs <<  "ሜ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ּ' &&   line[$+2] == L'ֲ')
                {
                    ofs <<  "ማ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֳ' )
                {
                    ofs <<  "ማ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ּ' &&   line[$+2] == L'ִ')
                {
                    ofs <<  "ሚ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֵ' )
                {
                    ofs <<  "ሜ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ּ' &&   line[$+2] == L'ֶ')
                {
                    ofs <<  "ሜ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֹ' )
                {
                    ofs <<  "ሞ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ּ' &&   line[$+2] == L'ֻ')
                {
                    ofs <<  "ሙ" ;
                }
                else if ( line[$] == L'מ' && line[$+1] == L'ּ')
                {
                    ofs <<  "ም" ;
                }

       else if (line[$] == L'מ'  && line[$+1] == L'ַ' )
                {
                    ofs <<  "ማ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ָ' )
                {
                    ofs <<  "ማ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ֱ' )
                {
                    ofs <<  "ሜ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ֲ')
                {
                    ofs <<  "ማ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ֳ' )
                {
                    ofs <<  "ማ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ִ')
                {
                    ofs <<  "ሚ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ֵ' )
                {
                    ofs <<  "ሜ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ֶ')
                {
                    ofs <<  "ሜ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ֹ' )
                {
                    ofs <<  "ሞ" ;
                }
                else if (line[$] == L'מ'  && line[$+1] == L'ֻ')
                {
                    ofs <<  "ሙ" ;
                }
                else if ( line[$] == L'מ')
                {
                    ofs <<  "ም" ;
                }

                else if ( line[$] == L'ם')
                {
                    ofs <<  "ም" ;
                }

                else if (line[$] == L'נ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ַ' )
                {
                    ofs <<  "ና" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ָ' )
                {
                    ofs <<  "ና" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֱ' )
                {
                    ofs <<  "ኔ" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ּ' &&   line[$+2] == L'ֲ')
                {
                    ofs <<  "ና" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֳ' )
                {
                    ofs <<  "ና" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ּ' &&   line[$+2] == L'ִ')
                {
                    ofs <<  "ኒ" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֵ' )
                {
                    ofs <<  "ኔ" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ּ' &&   line[$+2] == L'ֶ')
                {
                    ofs <<  "ኔ" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ּ' &&  line[$+2]  == L'ֹ' )
                {
                    ofs <<  "ኖ" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ּ' &&   line[$+2] == L'ֻ')
                {
                    ofs <<  "ኑ" ;
                }
                else if ( line[$] == L'נ' && line[$+1] == L'ּ')
                {
                    ofs <<  "ን" ;
                }

                else if (line[$] == L'נ'  && line[$+1] == L'ַ' )
                {
                    ofs <<  "ና" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ָ' )
                {
                    ofs <<  "ና" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ֱ' )
                {
                    ofs <<  "ኔ" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ֲ')
                {
                    ofs <<  "ና" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ֳ' )
                {
                    ofs <<  "ና" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ִ')
                {
                    ofs <<  "ኒ" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ֵ' )
                {
                    ofs <<  "ኔ" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ֶ')
                {
                    ofs <<  "ኔ" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ֹ' )
                {
                    ofs <<  "ኖ" ;
                }
                else if (line[$] == L'נ'  && line[$+1] == L'ֻ')
                {
                    ofs <<  "ኑ" ;
                }
                else if ( line[$] == L'נ' )
                {
                    ofs <<  "ን" ;
                }

                else if ( line[$] == L'ן')
                {
                    ofs <<  "ን" ;
                }

                else if ( line[$] == L'ג' && line[$+1] == L'ּ')
                {
                    ofs <<  "ግ" ;
                }

                else if ( line[$] == L'ד' && line[$+1] == L'ּ')
                {
                    ofs <<  "ድ" ;
                }

                else if ( line[$] == L'ז' && line[$+1] == L'ּ')
                {
                    ofs <<  "ዝ" ;
                }
                else if ( line[$] == L'ח' && line[$+1] == L'ּ')
                {
                    ofs <<  "ኽ" ;
                }

                else if ( line[$] == L'ה' && line[$+1] == L'ּ')
                {
                    ofs <<  "ህ" ;
                }

                else if ( line[$] == L'י' && line[$-1] != L' ' && line[$-1] != L'"' && line[$-1] != L'.' && line[$-1] != L'?' && line[$-1] != L',' && line[$-1] != L':' && line[$-1] != L'ְ' && line[$-2] != L'ו' && line[$+1] == L'ו')
                {
                    ofs <<  "" ;
                }
                else if ( line[$] == L'י' && line[$+1] == L'ּ')
                {
                    ofs <<  "ይ" ;
                }

                else if ( line[$] == L'ט' && line[$+1] == L'ּ')
                {
                    ofs <<  "ጥ" ;
                }

                else if ( line[$] == L'ל' && line[$+1] == L'ּ')
                {
                    ofs <<  "ል" ;
                }

                else if ( line[$] == L'ס' && line[$+1] == L'ּ')
                {
                    ofs <<  "ስ" ;
                }
                else if ( line[$] == L'פ' && line[$+1] == L'ּ')
                {
                    ofs <<  "ፕ" ;
                }
                else if ( line[$] == L'צ' && line[$+1] == L'ּ')
                {
                    ofs <<  "ትጽ" ;
                }
                else if ( line[$] == L'ק' && line[$+1] == L'ּ')
                {
                    ofs <<  "ቅ" ;
                }
                else if ( line[$] == L'ת' && line[$+1] == L'ּ')
                {
                    ofs <<  "ት" ;
                }


                else if ( line[$] == L'א')
                {
                    ofs <<  "" ;
                }

                else if ( line[$] == L'ב')
                {
                    ofs <<  "ቭ" ;
                }

                else if ( line[$] == L'ג')
                {
                    ofs <<  "ግ" ;
                }

                else if ( line[$] == L'ד')
                {
                    ofs <<  "ድ" ;
                }

                else if ( line[$] == L'ז')
                {
                    ofs <<  "ዝ" ;
                }
                else if ( line[$] == L'ח')
                {
                    ofs <<  "ኽ" ;
                }

                else if ( line[$] == L'ט')
                {
                    ofs <<  "ጥ" ;
                }

                else if ( line[$] == L'י' )
                {
                    ofs <<  "ይ" ;
                }

                else if ( line[$] == L'ך')
                {
                    ofs <<  "ኽ" ;
                }

                else if ( line[$] == L'כ')
                {
                    ofs <<  "ኽ" ;
                }

                else if ( line[$] == L'ל')
                {
                    ofs <<  "ል" ;
                }

                else if ( line[$] == L'ס')
                {
                    ofs <<  "ስ" ;
                }
                /*else if (line[$] == L'ע' && line[$-1] == L' ' && line[$+2] == L'ד' )
                {
                    ofs <<  "ዐ" ;
                }*/
                else if (line[$] == L'ע')
                {
                    ofs <<  "ዐ" ;
                }

                else if ( line[$] == L'פ')
                {
                    ofs <<  "ፍ" ;
                }
                else if ( line[$] == L'ף')
                {
                    ofs <<  "ፍ" ;
                }

                else if ( line[$] == L'צ')
                {
                    ofs <<  "ትጽ" ;
                }

                else if ( line[$] == L'ץ')
                {
                    ofs <<  "ትጽ" ;
                }

                else if ( line[$] == L'ק')
                {
                    ofs <<  "ቅ" ;
                }

                else if ( line[$] == L'ר')
                {
                    ofs <<  "ር" ;
                }

                else if ( line[$] == L'ת')
                {
                    ofs <<  "ት" ;
                }



                else if ( line[$] == L' ')
                {
                    ofs <<  " " ;
                }
                else if ( line[$] == L'?')
                {
                    ofs <<  "?";
                }
                else if ( line[$] == L',')
                {
                    ofs <<  ",";
                }
                else if ( line[$] == L'!')
                {
                    ofs <<  "!";
                }
                else if ( line[$] == L'"' && line[$+1] == L'*')
                {
                    ofs <<  "' \n";
                }
                else if ( line[$] == L'"')
                {
                    ofs <<  "'";
                }
                else if ( line[$] == L'-')
                {
                    ofs <<  "-" ;
                }
                else if ( line[$] == L'.')
                {
                    ofs <<  ".";
                }


                else if (line[$-1] != L'1' && line[$-1] != L'2' && line[$-1] != L'3' && line[$-1] != L'4' && line[$-1] != L'5' && line[$-1] != L'6' && line[$-1] != L'7' && line[$-1] != L'8' && line[$-1] != L'9' && line[$-1] != L'0' &&  line[$] == L'0' )
                {
                    ofs <<  "\n0" ;
                }

                else if (line[$-1] != L'1' && line[$-1] != L'2' && line[$-1] != L'3' && line[$-1] != L'4' && line[$-1] != L'5' && line[$-1] != L'6' && line[$-1] != L'7' && line[$-1] != L'8' && line[$-1] != L'9' && line[$-1] != L'0' &&  line[$] == L'1')
                {
                    ofs <<  "\n1" ;
                }

                else if (line[$-1] != L'1' && line[$-1] != L'2' && line[$-1] != L'3' && line[$-1] != L'4' && line[$-1] != L'5' && line[$-1] != L'6' && line[$-1] != L'7' && line[$-1] != L'8' && line[$-1] != L'9' && line[$-1] != L'0' &&  line[$] == L'2')
                {
                    ofs <<  "\n2" ;
                }

                else if (line[$-1] != L'1' && line[$-1] != L'2' && line[$-1] != L'3' && line[$-1] != L'4' && line[$-1] != L'5' && line[$-1] != L'6' && line[$-1] != L'7' && line[$-1] != L'8' && line[$-1] != L'9' && line[$-1] != L'0' &&  line[$] == L'3')
                {
                    ofs <<  "\n3" ;
                }

                else if (line[$-1] != L'1' && line[$-1] != L'2' && line[$-1] != L'3' && line[$-1] != L'4' && line[$-1] != L'5' && line[$-1] != L'6' && line[$-1] != L'7' && line[$-1] != L'8' && line[$-1] != L'9' && line[$-1] != L'0' &&  line[$] == L'4')
                {
                    ofs <<  "\n4" ;
                }

                else if (line[$-1] != L'1' && line[$-1] != L'2' && line[$-1] != L'3' && line[$-1] != L'4' && line[$-1] != L'5' && line[$-1] != L'6' && line[$-1] != L'7' && line[$-1] != L'8' && line[$-1] != L'9' && line[$-1] != L'0' &&  line[$] == L'5')
                {
                    ofs <<  "\n5" ;
                }
                else if (line[$-1] != L'1' && line[$-1] != L'2' && line[$-1] != L'3' && line[$-1] != L'4' && line[$-1] != L'5' && line[$-1] != L'6' && line[$-1] != L'7' && line[$-1] != L'8' && line[$-1] != L'9' && line[$-1] != L'0' &&  line[$] == L'6')
                {
                    ofs <<  "\n6" ;
                }

                else if (line[$-1] != L'1' && line[$-1] != L'2' && line[$-1] != L'3' && line[$-1] != L'4' && line[$-1] != L'5' && line[$-1] != L'6' && line[$-1] != L'7' && line[$-1] != L'8' && line[$-1] != L'9' && line[$-1] != L'0' &&  line[$] == L'7')
                {
                    ofs <<  "\n7" ;
                }
                                else if (line[$-1] != L'1' && line[$-1] != L'2' && line[$-1] != L'3' && line[$-1] != L'4' && line[$-1] != L'5' && line[$-1] != L'6' && line[$-1] != L'7' && line[$-1] != L'8' && line[$-1] != L'9' && line[$-1] != L'0' &&  line[$] == L'8')
                {
                    ofs <<  "\n8" ;
                }

                else if (line[$-1] != L'1' && line[$-1] != L'2' && line[$-1] != L'3' && line[$-1] != L'4' && line[$-1] != L'5' && line[$-1] != L'6' && line[$-1] != L'7' && line[$-1] != L'8' && line[$-1] != L'9' && line[$-1] != L'0' && line[$] == L'9')
                {
                    ofs <<  "\n9" ;
                }

                else if (line[$] == L'0' )
                {
                    ofs <<  "0" ;
                }

                else if (line[$] == L'1')
                {
                    ofs <<  "1" ;
                }

                else if (line[$] == L'2')
                {
                    ofs <<  "2" ;
                }

                else if (line[$] == L'3')
                {
                    ofs <<  "3" ;
                }

                else if (line[$] == L'4')
                {
                    ofs <<  "4" ;
                }

                else if (line[$] == L'5')
                {
                    ofs <<  "5" ;
                }
                else if (line[$] == L'6')
                {
                    ofs <<  "6" ;
                }

                else if (line[$] == L'7')
                {
                    ofs <<  "7" ;
                }
                                else if (line[$] == L'8')
                {
                    ofs <<  "8" ;
                }

                else if (line[$] == L'9')
                {
                    ofs <<  "9" ;
                }
                else if ( line[$] == L'*' && line[$-1] != L'*')
                {
                    ofs <<  "\n" ;
                }
                                else if ( line[$] == L'*' && line[$+1] != L'*')
                {
                    ofs <<  "\n" ;
                }
                else if ( line[$] == L'*')
                {
                    ofs <<  "*" ;
                }

                else if ( line[$] == L'M')
                {
                    ofs <<  "\n M" ;
                }

                else if ( line[$] == L'L')
                {
                    ofs <<  "\n L" ;
                }

                else if ( line[$] == L'J')
                {
                    ofs <<  "\n J" ;
                }

                else if ( line[$] == L'A')
                {
                    ofs <<  "\n A" ;
                }

                else if ( line[$] == L'R')
                {
                    ofs <<  "\n R" ;
                }

                else if ( line[$] == L'C')
                {
                    ofs <<  "\n C" ;
                }
                else if ( line[$] == L'G')
                {
                    ofs <<  "\n G" ;
                }

                else if ( line[$] == L'E')
                {
                    ofs <<  "\n E" ;
                }
                                else if ( line[$] == L'P')
                {
                    ofs <<  "\n P" ;
                }

                else if ( line[$] == L'T')
                {
                    ofs <<  "\n T" ;
                }
                else if ( line[$] == L'H')
                {
                    ofs <<  "\n H" ;
                }
				                else if ( line[$] == L'a')
                {
                    ofs <<  "a" ;
                }
				                else if ( line[$] == L'b')
                {
                    ofs <<  "b" ;
                }
				                else if ( line[$] == L'c')
                {
                    ofs <<  "c" ;
                }
				                else if ( line[$] == L'c')
                {
                    ofs <<  "d" ;
                }
				                else if ( line[$] == L'e')
                {
                    ofs <<  "c" ;
                }
				                else if ( line[$] == L'f')
                {
                    ofs <<  "f" ;
                }
				                else if ( line[$] == L'g')
                {
                    ofs <<  "g" ;
                }
				                else if ( line[$] == L'h')
                {
                    ofs <<  "h" ;
                }
				
				                else if ( line[$] == L'k')
                {
                    ofs <<  "k" ;
                }
				                else if ( line[$] == L'l')
                {
                    ofs <<  "l" ;
                }
				                else if ( line[$] == L'm')
                {
                    ofs <<  "m" ;
                }
				                else if ( line[$] == L'n')
                {
                    ofs <<  "n" ;
                }
				                else if ( line[$] == L'o')
                {
                    ofs <<  "o" ;
                }
				                                else if ( line[$] == L'p')
                {
                    ofs <<  "p" ;
                }
								                                else if ( line[$] == L'q')
                {
                    ofs <<  "q" ;
                }
				                else if ( line[$] == L'r')
                {
                    ofs <<  "r" ;
                }
				                else if ( line[$] == L's')
                {
                    ofs <<  "s" ;
                }
				
                else if ( line[$] == L't')
                {
                    ofs <<  "t" ;
                }

                else if ( line[$] == L'u')
                {
                    ofs <<  "u" ;
                }
                else if ( line[$] == L'v')
                {
                    ofs <<  "v" ;
                }
				else if ( line[$] == L'w')
                {
                    ofs <<  "w" ;
                }
				else if ( line[$] == L'x')
                {
                    ofs <<  "x" ;
                }                
                else if ( line[$] == L'y')
                {
                    ofs <<  "y" ;
                }
				else if ( line[$] == L'z')
                {
                    ofs <<  "z" ;
                }
                else
                {
                    ofs <<  "" ;
                }
                }
    } while(getline(ifs, line));
	                    else cout << "Unable to open file";
                    ifs.close();
                    ofs.close();
	return 0;
}