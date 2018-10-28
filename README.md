# praktikum3##
 
## Latihan1.cpp

**Alur Algoritma**
1. Mengdeklaraksikan Variable int a,max,n sebagai variable input
2. Membaca input dari  keyboard cin >> n
3. Membandingkan nilai variable **A** vaiable **Max** jika **a>Max**
4. Bandingkan kembali kedua variable sebanyak jumlah **n** atau bilangan yang di input
5. Sampai menemukN Hasil **A-Max** maka cetaklah
6. Print bilangan terbesar dari semua bilangan yang di inputkan.## Latihan.cpp

**Flowchart Program**
![f11](https://github.com/Isrohdyt18/praktikum3/blob/master/flowchart1.png)

**CODE PROGRAM**
```c++
#include <iostream>
using namespace std;
int main() {
    int i=0;
    int max=0;
    int n,a;

    cout << "masukan bilangan: ";
    cin >> n;

    for(i;i<n;i++) {
        cout << "masukan bilangan ke" << i+1 << ":";
        cin >> a;

        if (a > max)
            max = a;
    }

    cout << "bilangan terbesar adalah: " << max << endl;
}
```
**HASIL**
![Hasil1](
https://github.com/Isrohdyt18/praktikum3/blob/master/Screenshot1.png)


## Latihan2.cpp

1. Mengdeklarasikan Variable int A,B,C sebagai Variable input
2. Membaca input dari keyboard cin >> A >> B >> C
3. Membandingkan nilai variable **A** dengan variable **B** jika A lebih kecil dari pada B
4. Bandingkan kembali variable B dengan variable C
5. Jika kondisi **true** Maka cetaklah bilangan secara beruntun dari yang terkecil-terbesar yaitu **A,B,C**
6. Jika kondisi **false** Bandingkan kembali variable A dengan variable C jika A lebih kecil dari C
7. Kondisi **true** Maka cetaklah bilagan secara berurutan dari dari yang terkecil-terbesar yaitu **A,C,B**
8. Jika kondisi **false** Maka cetaklah bilangan secara  berurutan dari yang terkecil-terbesar yaitu **C,A,B**
9. Kemudian jika A Lebih kecil dari C
10.Jika kondisi **true** Maka cetakalah secara berurutan dari yang terkecil-terbesar yaitu **B,A,C**
11.Jika kondisi **false** Bandingkan kembali variable B dengan variable C jika B lebih kecil dari C
12.Jika kondisi **true** Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **B,C,A**
13.Jika kondisi **false** Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **C,B,A**
14.END

**Flowchart Program**
![f12](
https://github.com/Isrohdyt18/praktikum3/blob/master/flowchart2.png)

**CODE PROGRAM**
```c++
#include <iostream>
using namespace std;
int main() {
    int A,B,C;

    cout << "masukan bilang A: "; cin >> A;
    cout << "masukan bilang B: "; cin >> B;
    cout << "masukan bilang C: "; cin >> C;

    if (A<B) {
            if (B<C)
                cout << "urutan bilangan: " << A << ", " << B << ", " << C << endl;
            else {
                if (A<C)
                    cout << "urutan bilangan: " << A << ", " << C << ", " << B << endl;
                else
                    cout << "urutan bilangan: " << C << ", " << A << ", " << B << endl;
            }
    } else {
        if (A<C)
            cout << "urutan bilangan: " << B << ", " << A << ", " << C << endl;
        else {
            if (B<C)
                cout << "urutan bilangan: " << B << ", " << C << ", " << A << endl;
            else
                cout << "urutan bilangan: " << C << ", " << B << ", " << A << endl;
        }
    }
}

**HASIL**
![Hasil2](https://github.com/Isrohdyt18/praktikum3/blob/master/Screenshot2.png)


## Latihan3.cpp

**Alur Algoritma**
1. Masukan input (a, b, c)
2. jika (a==b && a==c)
   tampilkan("Segitiga sama sisi")
3. lainnya jika(a==b || b==c)
   jika(a!=b || a!=c)
   tampilkan("Segitiga sama kaki")
4. lainnya
   tampilkan("Segitiga sembarang")
5. END

**Flowchart Program**
![f13](https://github.com/Isrohdyt18/praktikum3/blob/master/flowchart3.png)

**CODE PROGRAM**
```c++
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,b,c;

    cout <<"nilai sisi A : ";
    cin >> a;

    cout <<"nilai sisi B : ";
    cin >> b;

    cout <<"nilai sisi C : ";
    cin >> c;

    if(a==b && a==c)
    {
        cout<<"segitiga sama sisi"<<endl;
    }
    else if (a==b || a==c)
    {
        if(a!=b || a!=c)
        {
            cout<<"segitiga sama kaki"<<endl;
        }
    }
    else
    cout<<"segitiga sembarang"<<endl;

    return 0;

}


























