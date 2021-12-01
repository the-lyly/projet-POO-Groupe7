#pragma once


// ----- FICHIER ".h" -------

#pragma once
//#include <iostream>
//using namespace std;
using namespace System;


// COUCHE COMPOSANT

//------------------- CLASSE PERSONNE -------------------

ref class Personne {
protected:
    int id;
    String^ nom;
    String^ prenom;
public:
    //ACCESSEURS
    String^ GetNom();
    void setNom(String^ nom);

    String^ GetPrenom();
    void setPrenom(String^ prenom);

    int getID();

    //Constructeur de la classe
    Personne();
};

//------------------- CLASSE CLIENT -------------------

ref class Client : public Personne {
protected:
    DateTime^ DateNaissance;
    DateTime^ Date1erAchat;
    String^ AdresseLivraison;
    String^ AdresseFacturation;

    //ACCESSEURS
public:
    DateTime^ GetDateNaissance();
    void setDateNaissance(DateTime^ DateNaissance);

    DateTime^ GetDate1erAchat();
    void setDate1erAchat(DateTime^ Date1erAchat);

    //Constructeur de la classe
    Client();
};

//------------------- CLASSE PERSONNEL -------------------

ref class Personnel : public Personne {
protected:
    int IDSuperieur;
    DateTime^ DateEmbauche;
    String^ Adresse;

public:
    //ACCESSEURS
    int getIDSuperieur();
    void SetIDSuperieur(int id);

    DateTime^ GetDateEmbauche();
    void SetDateEmbauche(DateTime^ GetDateEmbauche);

    String^ GetAdresse;
    void SetAdresse(String^ Adresse);

    //Constructeur de la classe
    Personnel();
};
//------------------- CLASSE PAIMENT -------------------
ref class Paiement {
private:
    //attributs
    int NumPaiement;
    bool Tranche;
    int NbrTranche;
    int MontantTranche;
    String^ MoyenPaiement;
    DateTime^ DatePaiment;
    int Montant;

public:
    //ACCESSEURS
    int GetNumPaiement();
    void SetNumPaiement(int NumPaiement);

    int GetTranche();
    void SetTranche(bool Tranche);

    int GetMontantTranche();
    void SetMontantTranche(int MontantTranche);

    String^ GetMoyenPaiement();
    void SetMoyenPaiement(String^ MoyenPaiement);

    DateTime GetDatePaiement();
    void SetDatePaiement(DateTime^ DatePaiement);

    int GetMontant();
    void SetMontant(int Montant);

    //Constructeur de la classe 
    Paiement();
};

//------------------- CLASSE COMMANDE -------------------
ref class Commande {
private:
    //attributs
    String^ RefArticle;
    int QTarticle;
    DateTime^ DateEmission;
    DateTime^ DateLivraison;

public:
    //ACCESSEURS
    String^ GetRefArticle();
    void SetRefArticle(String^ RefArticle);

    int GetQTarticle();
    void SetQTarticle(int QTarticle);

    DateTime GetDateEmission();
    void SetDateEmission(DateTime^ DateEmission);

    DateTime GetDateLivraison();
    void SetDateLivraison(DateTime^ DateLivraison);

    //Constructeur de la classe 
    Commande();
};

//------------------- CLASSE ARTICLE -------------------
ref class Article {
private:
    //attributs
    String^ RefArticle;
    String^ TypeArticle;
    int PrixHT;
    float TauxTVA;

public:
    //ACCESSEURS
    String^ GetRefArticle();
    void SetRefArticle(String^ RefArticle);

    String^ GetTypeArticle();
    void SetTypeArticle(String^ TypeArticle);

    int GetPrixHT();
    void SetPrixHT(int PrixHT);

    float GetTauxTVA();
    void SetTauxTVA(float TauxTVA);

    //Constructeur de la classe 
    Article();
};

//------------------- CLASSE STOCK -------------------
ref class Stock {
private:
    //attributs
    Collections::Generic::List < Article^ >^ Article1;
    int SeuilReapro;
    int QTstock;

public:
    //ACCESSEURS
    int GetSeuilReapro();
    void SetSeuilReapro(int SeuilReapro);

    int GetQTstock();
    void SetQTstock(int QTstock);

    //Constructeur de la classe 
    Stock() {
        Article1 = gcnew Collections::Generic::List <Article^> ;
    }
};

//------------------------------------------------------------------------------


// COUCHE SERVICES

//------------------- CLASSE GESTION CLIENT -------------------

ref class GestionClient {
private:
    //Attributs
    Client^ Client1;

public:
    //Méthodes
    void CreerClient();
    //String^ AfficherClient();
    void ModifierClient();
    void SupprimerClient();

    // Constructeur de la classe
    GestionClient() {
        Client1 = gcnew GestionClient;
    }

};

//------------------- CLASSE GESTION PERSONNEL -------------------

ref class GestionPersonnel {
private:
    //Attributs
    Personnel^ Personnel1;

public:
    //Méthodes
    void CreerPersonnel();
    //String^ AfficherPersonnel();
    void ModifierPersonnel();
    void SupprimerPersonnel();

    // Constructeur de la classe
    GestionPersonnel() {
        Personnel1 = gcnew GestionPersonnel;
    }

};

//------------------- CLASSE GESTION DU STOCK -------------------
ref class GestionStock {
private:
    //attributs
    Stock^ Stock1;

public:
    //Méthodes
    void CreerStock();
    //String^ AfficherStock();
    void ModifierStock();
    void SupprimerStock();

    //Constructeur de la classe 
    GestionStock() {
        Stock1 = gcnew GestionStock;
    }
};

//------------------- CLASSE GESTION COMMANDES -------------------
ref class GestionCommande {
private:
    //attributs
    Commande^ Commande1;

public:
    //Méthodes
    void CreerCommande();
    // String^ AfficherCommande();
    void ModifierCommande();
    void SupprimerCommande();

    //Constructeur de la classe 
    GestionCommande() {
        Commande1 = gcnew GestionCommande;
    }
};

//------------------- CLASSE GESTION DES STATISTIQUES -------------------
ref class GestionStatistiques {
private:
    //attributs
    Client^ Client2;
    Commande^ Commande2;
    Stock^ Stock2;
    Paiement^ Paiement1;
    Article^ Article2;

public:
    //Méthodes
    double PanierMoyen();
    double ChiffreAffaire();
    int SousSeuilReapro();
    int TotalAchatClient();
    int DixPlusVendus();
    int DixMoinsVendus();
    int ValComStock();
    int ValAchatStock();
    int SimulationValStock();


    //Constructeur de la classe 
    GestionStatistiques() {
        Client2 = gcnew GestionStatistiques;
        Commande2 = gcnew GestionStatistiques;
        Stock2 = gcnew GestionStatistiques;
        Paiement1 = gcnew GestionStatistiques;
        Article2 = gcnew GestionStatistiques;

    }
};

//------------------------------------------------------------------------------





