-------------------------------------------------------------


                                !!!Witaj!!!

W folderach masz pochowane odpowiedniego zastosowania pliki:


-------------------------------------------------------------

MusicWorldSIM\path.cpp
MusicWorldSIM\path.h       Sprawdzam tutaj ścieże systemową całej APKI (dlaczego to robie
                            napisałem niżej  )

                                                 ||   ||   ||
                                                 ||   ||   ||
                                                \  / \  / \  /
                                                 \/   \/   \/

-------------------------------------------------------------
MusicWorldSIM\cmake-build-debug\dataFile\examplesData

     !!!! Tak wiem że miało być dodatkowych katalogów związanych z danym IDE ale dodałem je tutaj
  !!!!  zwiazku z posiadanymi plikami path.cpp która sprawdza aktualną ścieżke systową aby można
     !!!! było odpalać aplikacje niezależnie od polożenia na dysku , sprawdza ona ścieże do folderu cmake-build-debug
  !!!  ponieważ tam znajduje się plik lab.exe który uruchamia cały program , pozdrawiam :D
{

albumName.txt
beat.txt
distCompany.txt
expertiseArea.txt
name.txt
nameMusic.txt
nickName.txt
surname.txt
typeMusic.txt
}
-------------------------------------------------------------
MusicWorldSIM\base
{
baseMain.cpp  ==    Main wraz z glownym menu wyboru
baseStruct.h  ==    Header w ktorym includuje Classy oraz posiadam Define

}
-------------------------------------------------------------
MusicWorldSIM\Class
{
ClassAlbum.cpp  ==  Folder posiadajacy pliki i headery Class
ClassAlbum.h
ClassMusic.cpp
ClassMusic.h
ClassMusician.cpp
ClassMusician.h
ClassPerson.cpp
ClassPerson.h
ClassProducent.cpp
ClassProducent.h
}
-------------------------------------------------------------
MusicWorldSIM\Fun
{
funAdd.cpp  == funckja dodawania obiektow do tablicy wskanikow
funAdd.h
funCreate.cpp == tworzenie obiektow danej klasy
funCreate.h
funDelete.cpp == usuwanie obiektow danej klasy
funDelete.h
funEdit.cpp  == edycja obiektow danej klasy
funEdit.h
funInit.cpp  == initializacja obiektow danej klasy
funInit.h
funOptiFun.cpp  == funckje optymalizujace np. funkcja "please press Enter to Continue"
funOptiFun.h
funPrint.cpp    == funkcje wyswwietlajace w konsoli (wszystkie)
funPrint.h
funRandData.cpp  == funckje zwracajace/zmieniajeca zmienne random
funRandData.h
funSort.cpp  == funckje sortowania (babelkowe) obiektow danej klasy
funSort.h
}
-------------------------------------------------------------
MusicWordlSIM\head
{
headHeadFile.h  == header posiadajcy wszystkie uzyte biblioteki standardowe jak i wlasne
}
-------------------------------------------------------------