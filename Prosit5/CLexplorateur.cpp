#include "pch.h"
#include "CLexplorateur.h"

#include <iostream>

namespace NS_composants
{
	array<String^>^ CLfichier::explorerUnDossier(String^ dossier)
	{
		array<String^>^ files = System::IO::Directory::GetFiles(dossier);
		Console::WriteLine(files);
		return files;
	}
	void CLfichier::effacer(String^ fichier)
	{
		System::IO::File::Delete(fichier);
	}
	void CLfichier::copier(String^ fichierSource, String^ fichierDestination)
	{
		String^ nomDeFichierExtension;
		nomDeFichierExtension = System::IO::Path::GetFileName(fichierSource);
		System::IO::File::Copy(fichierSource, fichierDestination + "\\" + nomDeFichierExtension);
	}
}
