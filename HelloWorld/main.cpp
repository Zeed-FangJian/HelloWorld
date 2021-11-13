//
//  main.cpp
//  HelloWorld
//
//  Created by Zheda Li on 9/4/21.
//


//#include<iostream>
//int main()
//{
//    std::cout << "enter two numbers" << std::endl;
//    int v1, v2;
//    std::cin >> v1 >> v2;
//    std::cout << "sum of " << v1 << " plus " << v2 << " is "
//    << v1 + v2 << std::endl;
//    return 0;
//}
#include<iostream>
#include<vector>
#include<cctype>
#include"Sales_item.h"
class test {
public:
private:
    unsigned phone_number;
    std::string address;
    std::string employer;
    std::string student;
};
using namespace std;
int main()
{
//    std::cout << "hello world!"<< std::endl;
//    std::cout << "enter two numbers" << std::endl;
//    int v1, v2;
//    std::cin >> v1;
//    std::cin >> v2;
//    std::cout << "product of " << v1;
//    std::cout << " and " << v2;
//    std::cout << " is " << v1 * v2 << std::endl;
//    std::cout << "/*";
//    std::cout << "*/";
//    int val = 1, sum = 0;
//    while (val <= 10)
//    {
//        sum += val;
//        ++val;
//    }
//    int sum = 0;
//    for (int val = 50; val <= 100; ++val)
//    {
//        sum += val;
//    }
//    std::cout << sum << std::endl;
//    int val = 50;
//    sum = 0;
//    while (val <= 100)
//    {
//        sum += val;
//        ++val;
//    }
//    std::cout << sum << std::endl;
//    val = 10;
//    while (val >= 0)
//    {
//        std::cout << val << std::endl;
//        --val;
//    }
//    for (int val = 10; val >= 0; --val)
//    {
//        std::cout << val << std::endl;
//    }
//    int v1, v2;
//    std::cout << "Enter two numbers" << std::endl;
//    std::cin >> v1 >> v2;
//    if (v1 >= v2)
//    {
//        std::cout << v1 << std::endl;
//    }
//    else
//    {
//        std::cout << v2 << std::endl;
//    }
//    int value, num = 0, counter = 0;
//    while (std::cin)
//    {
//        std::cin >> value;
//        if (value <= 0)
//        {
//            ++num;
//        }
//        ++counter;
//    }
//    std::cout << num << " numbers of " << counter << " numbers are negative" << std::endl;
//    return 0;
//    int v1, v2;
//    std::cout << "Enter two numbers" << std::endl;
//    std::cin >> v1 >> v2;
//    int lower, upper;
//    if (v1 <= v2)
//    {
//        lower = v1;
//        upper = v2;
//    }else
//    {
//        lower = v2;
//        upper = v1;
//    }
//    int sum = 0;
//    for (int val = lower, num_col = 0; val <= upper; ++val, ++num_col)
//    {
//        if (num_col%10 == 0)
//        {
//            num_col = 0;
//            std::cout << std::endl;
//        }
//        std::cout << val<<" ";
//        sum += val;
//    }
//    std::cout << std::endl;
//    std::cout << "sum between " << lower << " and " << upper
//              << " is " << sum << std::endl;
//    Sales_item book1, book2;
//    std::cin >> book1 >> book2;
//    if (compareIsbn(book1, book2))
//    {
//        std::cout << book1 + book2 << std::endl;
//    }else
//    {
//        std::cout << "two books are not the same!" << std::endl;
//    }
//    Sales_item book, total;
//    std::cout << "Enter the book:" << std::endl;
//    if (std::cin >> total) {
//        while (std::cin >> book) {
//            if (compareIsbn(book, total)) {
//                total += book;
//            } else {
//                std::cout << "different books"<< std::endl;
//                return -1;
//            }
//        }
//        std::cout << "total information " << total << std::endl;
//    } else {
//        std::cout << "No data!" << std::endl;
//        return -1;
//    }
//    Sales_item book_cur, book_new;
//    std::cout << "Enter the book:" << std::endl;
//    std::cin >> book_cur;
//    int amount = 1;
//    while (std::cin >> book_new) {
//        if (compareIsbn(book_cur, book_new)) {
//            ++amount;
//        } else {
//            std::cout << "Number of transactions of book "
//                      << book_cur.isbn() << " is "
//                      << amount << std::endl;
//            amount = 1;
//            book_cur = book_new;
//        }
//    }
//    std::cout << "Number of transactions of book "
//              << book_cur.isbn() << " is "
//              << amount << std::endl;
//    Sales_item total, trans_cur;
//    if (std::cin >> total) {
//        while (std::cin >> trans_cur) {
//            if (compareIsbn(total, trans_cur)) {
//                total += trans_cur;
//            } else {
//                std::cout << total << std::endl;
//                total = trans_cur;
//            }
//        }
//    } else {
//        std::cout << "No data!" << std::endl;
//        return -1;
//    }
//    std::cout << total << std::endl;
//    std::cout << "2M\n";
//    std::cout << "2\vM\n" << std::endl;
//    int base, exponent;
//    std::cout << "Enter base and exponent:" << std::endl;
//    std::cin >> base >> exponent;
//    long result = 1;
//    for (int count = 0; count < exponent; ++count) {
//        result *= base;
//    }
//    std::cout << base << " to the power of "
//              << exponent << " is "
//              << result << std::endl;
//    int month = 011, day = 07;
//    std::cout << month << "\n" << day << std::endl;
//    double val1 = 10.0;
//    const int &val = val1;
//    const int &ref_val1 = val1;
//    std::cout << "orginal val1 is "<< val1 << std::endl;
//    std::cout << "ref is "<< ref_val1 << std::endl;
//    val1 = 100;
//    std::cout << "ref is "<< ref_val1 << std::endl;
//    std::cout << "val is "<< val << std::endl;
//
//    enum open_modes {input = 1, output = 10, append};
//    open_modes temp = output;
//    std::cout << input << " "
//              << output << " "
//              << append << " "
//              << temp << std::endl;
//    int num, exponent;
//    cout << "Enter number and exponent" << endl;
//    cin >> num >> exponent;
//    int result = 1;
//    for (int val = 1; val <= exponent; ++val) {
//        result *= num;
//    }
//    cout << num <<" to the power of " << exponent
//         << " is " << result << endl;
//    string s1;
//    //cin >> s1 >> s2;
//    //cout << s1 << s2 << endl;
//    cin >> s1;
//    while (getline(cin, s1)) {
//        cout << "output1 "<< s1 << ", size is " << s1.size() << endl;
//    }
//    cout << endl;
//    string s1 = "hello";
//    cout << s1 << endl;
//    string s2 = s1 + " world";
//    cout << s2 << endl;
//    string s3 = s2 + " world";
//    cout << s3 << endl;
//    for (string::size_type ix = 0; ix < s3.size(); ++ix) {
//        cout << s3[ix] << endl;
//    }
//    string s1, s2;
//    cin >> s1 >> s2;
//    if (s1 == s2) {
//        cout << s1 << " = " << s2 << endl;
//    } else {
//        if (s1 > s2) {
//            cout << s1 << " > " << s2 << endl;
//        } else {
//            cout << s2 << " > " << s1 << endl;
//        }
//    }
//    if (s1.size() == s2.size()) {
//        cout << s1 + " and " + s2 + " have the same length" << endl;
//    } else {
//        if (s1.size() > s2.size()) {
//            cout << s1 + " length is larger" << endl;
//        } else {
//            cout << s2 + " length is larger" << endl;
//        }
//    }
//    return 0;
//    string s1, total;
//    while (cin >> s1) {
//        total += s1 + " ";
//    }
//    cout << "concatenated string is: " << total << endl;
//    return 0;
//    string s1, s2, s;
//    cin >> s1 >> s2;
//    s = s1 + ' ' + s2;
//    cout << s << endl;
//    cin >> s;
//    string s_prime;
//    for (int i = 0; i < s.size(); ++i) {
//        if (isalnum(s[i])) {
//            s_prime += s[i];
//        }
//    }
//    cout << s_prime << endl;
//    vector<int> ivec(10,20);
//    cout << ivec[0] << endl;
//    for (vector<int>::size_type i = 0; i < ivec.size(); ++i) {
//        cout << ivec[i] << endl;
//    }
//    vector<int> ivec;
//    int num, count = 0;
//    cout << "Enter numbers:" << endl;
//    while (cin >> num) {
//        ivec.push_back(num);
//        ++count;
//        if (count%2 == 0) {
//            cout << "the sum of first"
//                 << count - 1<< " and "
//                 << count << " elements is:"
//                 <<ivec[count - 1] + ivec[count - 2] << endl;
//        }
//    }
//    if (count%2 != 0) {
//        cout << count << "th element is: " << ivec[count - 1] << endl;
//    }
//    vector<int> ivec;
//    int cur_element;
//    while (cin >> cur_element) {
//        ivec.push_back(cur_element);
//    }
//    vector<int>::size_type left_pos = 0, right_pos = ivec.size() - 1;
//    cout << " length of vector is: " << ivec.size() << endl;
//    while (left_pos < right_pos) {
//        cout << ivec[left_pos] + ivec[right_pos] <<endl;
//        ++left_pos;
//        --right_pos;
//    }
//    if (left_pos == right_pos) {
//        cout << "the middle number is: " << ivec[right_pos] << endl;
//    }
//    vector<string> ivec;
//    string cur_element;
//    int count_col = 0;
//    while (cin >> cur_element) {
//        ivec.push_back(cur_element);
//    }
//    for (vector<string>::size_type ix = 0; ix != ivec.size(); ++ix) {
//        for (string::size_type ii = 0; ii != ivec[ix].size(); ++ii) {
//            if (islower(ivec[ix][ii])) {
//                ivec[ix][ii] = toupper(ivec[ix][ii]);
//            }
//        }
//        cout << ivec[ix] << " ";
//        ++count_col;
//        if (count_col == 8) {
//            cout << endl;
//        }
//    }
//    vector<int> array;
//    cout << "Enter numbers:"<< endl;
//    int num;
//    while (cin >> num) {
//        array.push_back(num);
//    }
//    vector<int>::iterator iter;
//    cout << "sum of consecutive two numbers:" << endl;
//    for (iter = array.begin(); iter < array.end() - 1; iter += 2) {
//        cout << *iter + *(iter + 1) << endl;
//    }
//    if (array.size()%2 != 0) {
//        cout << "last remaining element is:" << *iter << endl;
//    }
//    vector<int>::iterator iter_left = array.begin(), iter_right = array.end() - 1;
//    cout << "sum of head and tail numbers:" << endl;
//    while (iter_left < iter_right) {
//        cout << *iter_left + *iter_right<< endl;
//        ++iter_left;
//        --iter_right;
//    }
//    if (iter_left == iter_right) {
//        cout << "remaining middle number is:" << *iter_left << endl;
//    }
    vector<char> ivec;
    cout << "Enter words:" << endl;
    char element;
    while (cin >> element) {
        ivec.push_back(element);
    }
    vector<char>::iterator iter
    for (iter = ivec.begin(); iter != ivec.end(); ++iter) {
        *iter
    }
    return 0;
    
}
