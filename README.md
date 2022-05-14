# Zadania

Przed rozpoczęciem zadań zapoznaj się materiałami z ekursów.

## Klasa z wektorem przedmiotów

1. Zmień implementację metod `create` na jedną metodę będącą przeciążonym operatorem `+=`, który umożliwi dodawanie nowych przedmiotów. Przykładowo:

```C++
// main.cpp
BookShop shop;
shop += new AudioBook(1, "Harry Potter", "J. K. Rowling", 1.22, "mp3");
shop += new PaperBook(2, "Wiedźmin", "A. Sapkowski", Cover::hard, 320);
```

2. Zmień implementację metody `remove` na metodę będącą przeciążonym operatorem `-=`, który umożliwi usuwanie przedmiotów z listy na podstawie dowolnie wybranego pola identyfikującego przedmiot. Przykładowo `isbn` dla książek:

```C++
// main.cpp
shop -= 2;
```

3. Zmień implementację metody `read` na metodę będącą przeciążonym operatorem `<<`, który umożliwi wypisywanie detali przedmiotów w konsoli. Przykładowo:

```C++
// main.cpp
cout << shop;
```

:bulb: Operator `<<` wymaga wykorzystania funkcji zaprzyjaźionej, dlaczego ? Jeżeli nie wiesz porusz ten temat z prowadzącym. 

4. Zwróć uwagę, że pozostałe operatory można zapisać w dwóch wersjach (wewnątrz klasy oraz na zewnątrz). Sprawdź działanie obu wersji - **pamiętaj nie mieszaj ich razem, sprawdzaj zawsze jedną wybraną**.

## Główna encja - zadania zaawansowane

1. Zmień implementację metody `show` (lub `getDetails` zależy jak u Ciebie się nazywa) na metodę będącą przeciążonym operatorem `<<`, który umożliwi wypisywanie detali przedmiotu w konsoli. Wykorzystaj ten operator wewnątrz metody z pkt. 3 poprzedniej sekcji.

:bulb: Zwróć uwagę, że przeciążony operator nie może być funkcją wirtualną, oznacza to, że nie możesz bezpośrednio przeciążać go w klasach pochodnych i wykorzystywać. W repozytorium zaprezentowano przykładowe rozwiązanie wykorzystujące dodatkową funkcję czysto wirtualną, która **musi** zostać przeciążona w klasach pochodnych.

2. Przeciąż operator porównania `==` w głównej encji swojego rozwiązania w taki sposób by umożliwiał porównanie obiektów tego samego typu na podstawie wybranej wartości (wartości identyfikującej obiekt, przykłądowo `isbn` z książki). Wykorzystaj operator podczas dodawania nowego przedmiotu do wektora, jeżeli istnieje już taki sam przedmiot w wektorze to wypisz odpowiedni komunikat, np:

```C++
if (*book == newBook) {
   cout << "Książka z identyfikatorem " << newBook->getIsbn() << " już istnieje" << endl;
   return;
}
```

:bulb: Zwróć uwagę, że ten operator działa tylko na konkretnym obiekcie (nie na wskaźniku) przez co używanie go z wektorem wskaźników może wyglądać dość dziwnie.

## Zadanie domowe

Operatory `<<` oraz `==` są najpopularniejszymi operatorami ponieważ dają najwięcej możliwości i ułatwiają pracę programiście. Wiele języków programowania, które nie wspierają przeciążenia operatorów, dostarcza swoje rozwiązania co najmniej dla tych dwóch operacji (wypisania i porównania).

Przeciążanie operatorów jest bardzo pomocnym mechanizmem. Niemniej, często sprawia, że kod staje się zbyt nieczytelny dla osób dołączających do Twojego projektu. Jako zadanie domowe zdecyduj, które operatory naprawdę ułatwiają pracę w projekcie a które go "zaśmieacją" - te usuń.
