#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef int note;
typedef struct cell
{
	note donnee;
	struct cell*suivant;
}cellule;



cellule *inserTete(cellule *L,note d)
{
	cellule *p;
	p=(cellule*)malloc(sizeof(cellule));
	p->donnee=d;
	p->suivant=L;
	return p;
}
cellule *inserQueue(cellule *L,note d)
{
	cellule *p,*aux;
	p=(cellule*)malloc(sizeof(cellule));
	p->donnee=d;
	p->suivant=NULL;
	if(L==NULL)
	{
		return p;
	}
	else
	{
		for(aux=L;aux->suivant!=NULL;aux=aux->suivant)
		{

		}
		aux->suivant=p;
	}
	return L;
}
cellule *saisie()
{
	cellule *L=NULL;
	note donnee;
	char choix;
	printf("saisir 'o'pour entrer une donnee\n:");
	scanf("%s",&choix);
	while(choix=='o')
	{
		printf("svp une donnee\n:");
		scanf("%d",&donnee);
		L=inserQueue(L,donnee);
		printf("tapez 'o'pour continuer\n:");
		scanf("%s",&choix);
	}
	return L;
}
/*definition d'une fonction somme*/
note somme(cellule *L)
{
	cellule *p;
	note s=0;
	for(p=L;p!=NULL;p=p->suivant)
	{
		s=s+p->donnee;
	}
	printf("\nla somme des elements de la liste est=< %d >\n",s);
}
/*definition d'une fonction qui retourne l'adresse d'une donnee*/
cellule *Adresse(cellule *L,note d)
{
	cellule *p=L;
	while(p!=NULL && p->donnee!=d)
	{
		p=p->suivant;
	}
	if(p==NULL)
	{
		return NULL;
	}
	else
	return p;
}
/*definition d'une fonction tableau-liste*/
cellule *TabListe(note tab[],int n)
{
	int i;
	cellule *p=NULL;
	for(i=0;i<n;i++)
	{
		p=inserQueue(p,tab[i]);
	}
	return p;
}
/*definition d'une fonction Liste_tableau*/
cellule *ListeTableau(cellule *L)
{
	int i=0,n=0;
	note *tab;
	cellule *q=L;
	while(q!=NULL)
	{
		n++;
		q=q->suivant;
	}
	tab=(note*)malloc(n*sizeof(note));
	q=L;
	while(q!=NULL)
	{
		tab[i]=q->donnee;
		q=q->suivant;
		i++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",tab[i]);
	}
}
/*definition d'une fonction de recopie d'une liste dans l'ordre inverse*/
cellule *recOrdinv(cellule *L)
{
	cellule *f=L,*q=NULL;
	while(f!=NULL)
	{
		q=inserTete(q,f->donnee);
		f=f->suivant;
	}
	return q;
}
/*definition une fonction de recopie d'une liste chinee*/
cellule *recopie(cellule *L)
{
	cellule *q=L,*k=NULL;
	while(q!=NULL)
	{
		k=inserQueue(k,q->donnee);
		q=q->suivant;
	}
	return k;
}
/*definition d'une fonction qui supprime la premiere occurence*/
cellule *Sup1Occ(cellule *L,note d)
{
cellule *f=L,*k,*t;
if(f->donnee==d)
{
	t=f;
	f=f->suivant;
	free(t);
}
k=f->suivant;
while(k->suivant!=NULL && k->donnee!=d)
{
	k=k->suivant;
	f=f->suivant;
	if(k->donnee==d)
	{
		t=k;
		free(t);
		k=k->suivant;
		f->suivant=k;
	}
}
return L;
}
/*definition d'une fonction qui supprime tout occurence*/
cellule *SupToutOcc(cellule *L,note d)
{
cellule *f=L,*k,*t;
if(f->donnee==d)
{
	t=f;
	f=f->suivant;
	free(t);
}
k=f->suivant;
while(k->suivant!=NULL)
{
	if(k->donnee==d)
	{
		t=k;
		k=k->suivant;
		free(t);
	}
	else
	{
		k=k->suivant;
		f=f->suivant;
		if(k->donnee==d)
		{
			t=k;
			free(t);
			f->suivant=NULL;
		}
	}
}
return L;
}
/*definition d'une fonction supprime tout les occurences pour le tableau*/
note *suptoutOccTab(note tab[],note d,int n)
{
  int i=0,j=0;
  while(i<n)
  {
  	if(tab[i]==d)
  	{
  		i++;
    }
    else
    {
    	tab[j]=tab[i];
    	i++;
    	j++;
	}
  }
  n=j;
  for(j=0;j<n;j++)
  {
  	printf("%d\t",tab[j]);
  }
}
/*definition d'une fonction qui concatene deux listes*/
/*destructive*/
cellule *concatene(cellule *f,cellule *k)
{
	cellule *g=f;
	while(g->suivant!=NULL)
	{
		g=g->suivant;
	}
	g->suivant=k;
	return f;
}
/*conservatrice*/
cellule *concaTENE(cellule *L1,cellule *L2)
{
	cellule *g=L1,*U=NULL;
	while(g->suivant!=NULL)
	{
		U=inserTete(U,g->donnee);
		g=g->suivant;
	}
	g=L2;
	while(g->suivant!=NULL)
	{
		U=inserTete(U,g->donnee);
		g=g->suivant;
	}
	return U;
}
/*verifier si la liste est trier */
cellule *vertriOcroi(cellule *L)
{
	cellule *aux,*p=L;
	int j=0;
	if(p==NULL)
	{
	return NULL;
	}
	aux=p->suivant;
	while(aux!=NULL)
	{
		if(p->donnee>=aux->donnee)
		{
			j++;
		}
		p=p->suivant;
		aux=aux->suivant;
	}
	if(j==0)
	{
		return NULL;
	}
	else
	{
		return L;
	}
}
/*INSERTION D'UN ELEMENT DANS UNE LISTE TRIEE */
cellule *insertEL(cellule *L,note d)
{
	cellule *p,*k,*tmp;
	p=L;
	k=(cellule*)malloc(sizeof(cellule));
	k->donnee=d;
	k->suivant=NULL;
	if(p==NULL)
	{
		return k;
	}
	while(p!=NULL && k->donnee>p->donnee)
	{
	   p=p->suivant;
	}
	if(k->donnee<=p->donnee)
	{
		tmp=p;
		p=k;
		k->suivant=tmp;
	}
	if(p==NULL)
	{
		p=k;
	}
	return L;

}
/*INSERTION POUR UN TABLEAU*/
note *insetEl(note tab[],note d,int n)
{
	int i=0,j=0;
	while(i<n && tab[i]<d)
	{
		i++;
	}
	tab=(note*)realloc(tab,(n+1)*sizeof(note));
	if(i==n)
	{
		tab[i]=d;
	}
	if(tab[i]>=d)
	{
		for(j=n+1;j>i;j--)
		{
			tab[j]=tab[j-1];
		}
		tab[j]=d;
	}
	for(j=0;j<=n;j++)
	{
		printf("%d\t",tab[j]);
	}
}
/*fusionnement de listes alternativement*/
/*destructrice*/
cellule *fusion(cellule *p1,cellule *p2)
{
  cellule *L1,*L2,*suivL1,*suivL2;
  L1=p1;
  L2=p2;
  while(L1!=NULL && L2!=NULL)
  {
  	suivL1=L1->suivant;
  	suivL2=L2->suivant;
  	L1->suivant=L2;
  	L2->suivant=suivL1;
  	L1=suivL1;
  	L2=suivL2;
  }
  if(L1==NULL)
  {
  	L1=L2;
  }
  if(L2==NULL)
  {
  	L2=L1;
  }
  return p1;
}
/*conservatrice*/
 cellule *Fusion(cellule *L1,cellule *L2)
 {
 	cellule *p1=L1,*p2=L2,*p3=NULL;
 	while(p1!=NULL && p2!=NULL)
 	{
 		p3=inserTete(p3,p1->donnee);
 		p3=inserTete(p3,p2->donnee);
 		p1=p1->suivant;
 		p2=p2->suivant;
	 }
	 if(p2==NULL)
	 {
	 	p3=p1;
	 }
	 if(p1==NULL)
	 {
	 	p3=p2;
	 }
	 return p3;
}
/*INTERCLASSEMENT DE LISTES TRIEES*/
cellule *interclass(cellule *p1,cellule *p2)
{
	cellule *L1,*L2,*tmp,*deb,*k;
	L1=p1;
	L2=p2;
	if(L1->donnee<L2->donnee)
	{
		k=L1;
		deb=L1;
		L1=L1->suivant;
	}
	else
	{
		k=L2;
		deb=L2;
		L2=L1->suivant;
	}
	while(k->suivant!=NULL)
	{
		if(L1->donnee<L2->donnee)
		{
			k->suivant=L1;
			k=L1;
			L1=L1->suivant;
		}
		else
		{
			k->suivant=L2;
			k=L2;
			L2=L2->suivant;
		}
	}
	return deb;
}
/*tri interclassement*/
cellule *triInterC(cellule *L)
{
	cellule *L1,*L2,*tmp;
	L1=L;
	if(L1==NULL || L1->suivant==NULL)
	{
		return L1;
	}
	L2=L1->suivant->suivant;
	while(L2!=NULL && L2->suivant!=NULL)
	{
		L1=L1->suivant;
		L2=L2->suivant;
	}
	if(L2->suivant==NULL)
	{
		L2=L2->suivant;
		L1->suivant=NULL;
		L1=triInterC(L1);
		L2=triInterC(L2);
		tmp=interclass(L1,L2);
	}
	return tmp;
}

// liberation de la moimoire

void Liberation(cellule **pL)
                                 /* passage d’un pointeur par adresse : */
                                 /* pointeur sur pointeur */
{
cellule *p;
while (*pL != NULL)            /* tant que la liste est non vide */
{
p = *pL;                    /* memorisation de l’adresse de la cellule */
*pL = (*pL)->suivant;             /* cellule suivante */
free(p);                   /* destruction de la cellule memorisee */
}
*pL = NULL;                  /* on reinitialise la liste a vide */
}





/*fonction affichage*/
void affiche(cellule *L)
{
	cellule *q;
	for(q=L;q!=NULL;q=q->suivant)
	{
		printf("%d\t",q->donnee);
	}
	printf("\n");
}



/*fonction principale*/
int main()
{
	cellule *L;
	L=saisie();
	note d;
	printf("\n entrer une valeur \n");
	scanf("%d", &d);
	affiche(L);
	printf("\n ===== La somme de la liste saisie ===== \n");
	somme(L);
	printf("\n Transformer la liste en tableau ====\n");
	ListeTableau(L);
	printf("\n L'adresse de %d est %p\n", d, Adresse(L,d));
	Liberation(L);
	
}










//	cellule *maliste,*maliste1;
//	maliste=saisie();
//	int d;
//	printf("entre un entier\n");
//	scanf("%d",&d);
//	affiche(vertriOcroi(maliste));
//	printf("\n=============le tableau est ================\n");
//	ListeTableau(maliste);
//	printf("\n Ladresse de %d est %p\n",d,Adresse(maliste,d));
//	affiche(maliste);
//	maliste1=(cellule*)malloc(3*sizeof(cellule));
//	somme(maliste);
//	return 0;