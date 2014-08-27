#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BASEFILE "Base Classes.txt"
#define ACCOUNTING "Accounting Classes.txt"

void openBaseFile (char baseClass[200][10]);
void accountingChoice (char accountingFile[200][200]);
void adedChoice (char adedFile[200][200]);
void aeroChoice (char aeroFile[200][200]);
void agecChoice (char agecFile[200][200]);
void agrnChoice (char agrnFile[200][200]);
void anscChoice (char anscFile[200][200]);
void anthChoice (char anthFile[200][200]);
void archChoice (char archFile[200][200]);
void artsChoice (char artsFile[200][200]);
void avmgChoice (char avmgFile[200][200]);
void bcheChoice (char bcheFile[200][200]);
void biolChoice (char biolFile[200][200]);
void bsciChoice (char bsciFile[200][200]);
void bsenChoice (char bsenFile[200][200]);
void bualChoice (char bualFile[200][200]);
void busiChoice (char busiFile[200][200]);
void cadsChoice (char cadsFile[200][200]);
void ccrnChoice (char ccrnFile[200][200]);
void chemChoice (char chemFile[200][200]);
void chenChoice (char chenFile[200][200]);
void civlChoice (char civlFile[200][200]);
void cmdsChoice (char cmdsFile[200][200]);
void cmjnChoice (char cmjnFile[200][200]);
void commChoice (char commFile[200][200]);
void compChoice (char compFile[200][200]);
void counChoice (char counFile[200][200]);
void cplnChoice (char cplnFile[200][200]);
void ctctChoice (char ctctFile[200][200]);
void ctecChoice (char ctecFile[200][200]);
void ctesChoice (char ctesFile[200][200]);
void ctmuChoice (char ctmuFile[200][200]);
void ctrdChoice (char ctrdFile[200][200]);
void ctseChoice (char ctseFile[200][200]);
void econChoice (char econFile[200][200]);
void edldChoice (char edldFile[200][200]);
void edmdChoice (char edldFile[200][200]);
void elecChoice (char elecFile[200][200]);
void enfbChoice (char enfbFile[200][200]);
void englChoice (char englFile[200][200]);
void engrChoice (char engrFile[200][200]);
void entmChoice (char entmFile[200][200]);
void enviChoice (char enviFile[200][200]);
void epsyChoice (char epsyFile[200][200]);
void ermaChoice (char ermaFile[200][200]);
void eslChoice (char eslFile[200][200]);
void fdscChoice (char fdscFile[200][200]);
void fincChoice (char fincFile[200][200]);
void fishChoice (char fishFile[200][200]);
void flcnChoice (char flcnFile[200][200]);
void flfrChoice (char flfrFile[200][200]);
void flgkChoice (char flgkFile[200][200]);
void flgrChoice (char flgrFile[200][200]);
void flitChoice (char flitFile[200][200]);
void fljpChoice (char fljpFile[200][200]);
void flknChoice (char flknFile[200][200]);
void fllnChoice (char fllnFile[200][200]);
void flruChoice (char flruFile[200][200]);
void flspChoice (char flspFile[200][200]);
void foprChoice (char foprFile[200][200]);
void foryChoice (char foryFile[200][200]);
void founChoice (char founFile[200][200]);
void fowsChoice (char fowsFile[200][200]);
void gdesChoice (char gdesFile[200][200]);
void geogChoice (char geogFile[200][200]);
void geolChoice (char geolFile[200][200]);
void hadmChoice (char hadmFile[200][200]);
void hdfsChoice (char hdfsFile[200][200]);
void hiedChoice (char hiedFile[200][200]);
void histChoice (char histFile[200][200]);
void honrChoice (char honrFile[200][200]);
void hortChoice (char hortFile[200][200]);
void hrmnChoice (char hrmnFile[200][200]);
void hrmtChoice (char hrmtFile[200][200]);
void huscChoice (char huscFile[200][200]);
void insyChoice (char insyFile[200][200]);
void intlChoice (char intlFile[200][200]);
void ismnChoice (char ismnFile[200][200]);
void jrnlChoice (char jrnlFile[200][200]);
void kineChoice (char kineFile[200][200]);
void labtChoice (char labtFile[200][200]);
void landChoice (char landFile[200][200]);
void lbscChoice (char lbscFile[200][200]);
void leadChoice (char leadFile[200][200]);
void mathChoice (char mathFile[200][200]);
void matlChoice (char matlFile[200][200]);
void mdiaChoice (char mdiaFile[200][200]);
void mechChoice (char mechFile[200][200]);
void mktgChoice (char mktgFile[200][200]);
void mngtChoice (char mngtFile[200][200]);
void muapChoice (char muapFile[200][200]);
void museChoice (char museFile[200][200]);
void musiChoice (char musiFile[200][200]);
void ntriChoice (char ntriFile[200][200]);
void nursChoice (char nursFile[200][200]);
void pfenChoice (char pfenFile[200][200]);
void phedChoice (char phedFile[200][200]);
void philChoice (char philFile[200][200]);
void physChoice (char physFile[200][200]);
void plpaChoice (char plpaFile[200][200]);
void poliChoice (char poliFile[200][200]);
void poulChoice (char poulFile[200][200]);
void prcmChoice (char prcmFile[200][200]);
void psycChoice (char psycFile[200][200]);
void pydiChoice (char pydiFile[200][200]);
void pypcChoice (char pypcFile[200][200]);
void rsedChoice (char rsedFile[200][200]);
void rsocChoice (char rsocFile[200][200]);
void scmhChoice (char scmhFile[200][200]);
void scmnChoice (char scmnFile[200][200]);
void socyChoice (char socyFile[200][200]);
void sowoChoice (char sowoFile[200][200]);
void specialChoice (char specialFile[200][200]);
void statChoice (char statFile[200][200]);
void sustChoice (char sustFile[200][200]);
void theaChoice (char theaFile[200][200]);
void univChoice (char univFile[200][200]);
void wildChoice (char wildFile[200][200]);
void wmstChoice (char wmstFile[200][200]);





int main()
{
   char baseClass[200][10], accountingFile[200][200], adedFile[200][200], aeroFile[200][200], agecFile[200][200],
   agrnFile[200][200],anscFile[200][200],anthFile[200][200],archFile[200][200],artsFile[200][200],avmgFile[200][200],
   bcheFile[200][200],biolFile[200][200],bsciFile[200][200],bsenFile[200][200],bualFile[200][200],busiFile[200][200],cadsFile[200][200],
   ccrnFile[200][200],chemFile[200][200],chenFile[200][200],civlFile[200][200],cmdsFile[200][200],
   cmjnFile[200][200],commFile[200][200],compFile[200][200],counFile[200][200],cplnFile[200][200],ctctFile[200][200],
   ctecFile[200][200],ctesFile[200][200],ctmuFile[200][200],ctrdFile[200][200],ctseFile[200][200],econFile[200][200],
   edldFile[200][200],edmdFile[200][200],elecFile[200][200],enfbFile[200][200],englFile[200][200],engrFile[200][200],
   entmFile[200][200],enviFile[200][200],epsyFile[200][200],ermaFile[200][200],eslFile[200][200],fdscFile[200][200],
   fincFile[200][200],fishFile[200][200],flcnFile[200][200],flfrFile[200][200],flgkFile[200][200],flgrFile[200][200],
   flitFile[200][200],fljpFile[200][200],flknFile[200][200],fllnFile[200][200],flruFile[200][200],flspFile[200][200],
   foprFile[200][200],foryFile[200][200],founFile[200][200],fowsFile[200][200],gdesFile[200][200],geogFile[200][200],
   geolFile[200][200],hadmFile[200][200],hdfsFile[200][200],hiedFile[200][200],histFile[200][200],honrFile[200][200],
   hortFile[200][200],hrmnFile[200][200],hrmtFile[200][200],huscFile[200][200],insyFile[200][200],intlFile[200][200],
   ismnFile[200][200],jrnlFile[200][200],kineFile[200][200],labtFile[200][200],landFile[200][200],lbscFile[200][200],
   leadFile[200][200],mathFile[200][200],matlFile[200][200],mdiaFile[200][200],mechFile[200][200],mktgFile[200][200],mngtFile[200][200],
   muapFile[200][200],museFile[200][200],musiFile[200][200],ntriFile[200][200],nursFile[200][200],pfenFile[200][200],
   phedFile[200][200],philFile[200][200],physFile[200][200],plpaFile[200][200],poliFile[200][200],puolFile[200][200],
   prcmFile[200][200],psycFile[200][200],pydiFile[200][200],pypcFile[200][200],rsedFile[200][200],rsocFile[200][200],
   scmhFile[200][200],scmnFile[200][200],socyFile[200][200],sowoFile[200][200],specialFile[200][200],statFile[200][200],
   sustFile[200][200],theaFile[200][200],univFile[200][200],wildFile[200][200],wmstFile[200][200];
   char classAbbreviation;
   char classEntered;
   int g = 0;
   char classNumber;
   int numberOfClasses = 0, numberEntered = 0;
   
   
   //printf("How many classes are you taking? (I.e 6)\n");
   //scanf("%d", &numberEntered);
  
   openBaseFile (baseClass);
   

   printf("Please enter your class abbreviation (i.e ACCT).\n");  
   scanf("%s", &classEntered);
   
   
   
   if (strcmp(&classEntered, "ACCT") == 0) {
      accountingChoice(accountingFile);
   }
   if (strcmp(&classEntered, "ADED") == 0) {
      adedChoice(adedFile);
   }
   if (strcmp(&classEntered, "AERO") == 0) {
      aeroChoice(aeroFile);
   }
   if (strcmp(&classEntered, "AGEC") == 0) {
      agecChoice(agecFile);
   }
   if (strcmp(&classEntered, "AGRN") == 0) {
      agrnChoice(agrnFile);
   }
   if (strcmp(&classEntered, "ANSC") == 0) {
      anscChoice(anscFile);
   }
   if (strcmp(&classEntered, "ADED") == 0) {
      adedChoice(adedFile);
   }
   if (strcmp(&classEntered, "ANTH") == 0) {
      anthChoice(anthFile);
   }
   if (strcmp(&classEntered, "ARCH") == 0) {
      archChoice(archFile);
   }
   if (strcmp(&classEntered, "ARTS") == 0) {
      artsChoice(artsFile);
   }
   if (strcmp(&classEntered, "AVMG") == 0) {
      avmgChoice(avmgFile);
   }
   if (strcmp(&classEntered, "BCHE") == 0) {
      bcheChoice(bcheFile);
   }
   if (strcmp(&classEntered, "BIOL") == 0) {
      biolChoice(biolFile);
   }
   if (strcmp(&classEntered, "BSCI") == 0) {
      bsciChoice(bsciFile);
   }
   if (strcmp(&classEntered, "BSEN") == 0) {
      bsenChoice(bsenFile);
   }
   if (strcmp(&classEntered, "BUAL") == 0) {
      bualChoice(bualFile);
   }
   if (strcmp(&classEntered, "BUSI") == 0) {
      busiChoice(busiFile);
   }
   if (strcmp(&classEntered, "CADS") == 0) {
      cadsChoice(cadsFile);
   }
   if (strcmp(&classEntered, "CCRN") == 0) {
      ccrnChoice(ccrnFile);
   }
   if (strcmp(&classEntered, "CHEM") == 0) {
      chemChoice(chemFile);
   }
   if (strcmp(&classEntered, "CHEN") == 0) {
      chenChoice(chenFile);
   }
   if (strcmp(&classEntered, "CIVL") == 0) {
      civlChoice(civlFile);
   }
   if (strcmp(&classEntered, "CMDS") == 0) {
      cmdsChoice(cmdsFile);
   }
   if (strcmp(&classEntered, "CMJN") == 0) {
      cmjnChoice(cmjnFile);
   }
   if (strcmp(&classEntered, "COMM") == 0) {
      commChoice(commFile);
   }
   if (strcmp(&classEntered, "COMP") == 0) {
      compChoice(compFile);
   }
   if (strcmp(&classEntered, "COUN") == 0) {
      counChoice(counFile);
   }
   if (strcmp(&classEntered, "CPLN") == 0) {
      cplnChoice(cplnFile);
   }
   if (strcmp(&classEntered, "CTCT") == 0) {
      ctctChoice(ctctFile);
   }
   if (strcmp(&classEntered, "CTEC") == 0) {
      ctecChoice(ctecFile);
   }
   if (strcmp(&classEntered, "CTES") == 0) {
      ctesChoice(ctesFile);
   }
   if (strcmp(&classEntered, "CTMU") == 0) {
      ctmuChoice(ctmuFile);
   }
   if (strcmp(&classEntered, "CTRD") == 0) {
      ctrdChoice(ctrdFile);
   }
   if (strcmp(&classEntered, "CTSE") == 0) {
      ctseChoice(ctseFile);
   }
   if (strcmp(&classEntered, "ECON") == 0) {
      econChoice(econFile);
   }
   if (strcmp(&classEntered, "EDLD") == 0) {
      edldChoice(edldFile);
   }
   if (strcmp(&classEntered, "EDMD") == 0) {
      edmdChoice(edmdFile);
   }
   if (strcmp(&classEntered, "ELEC") == 0) {
      elecChoice(elecFile);
   }
   if (strcmp(&classEntered, "ENFB") == 0) {
      enfbChoice(enfbFile);
   }
   if (strcmp(&classEntered, "ENGL") == 0) {
      englChoice(englFile);
   }
   if (strcmp(&classEntered, "ENGR") == 0) {
      engrChoice(engrFile);
   }
   if (strcmp(&classEntered, "ENTM") == 0) {
      entmChoice(entmFile);
   }
   if (strcmp(&classEntered, "ENVI") == 0) {
      enviChoice(enviFile);
   }
   if (strcmp(&classEntered, "EPSY") == 0) {
      epsyChoice(epsyFile);
   }
   if (strcmp(&classEntered, "ERMA") == 0) {
      ermaChoice(ermaFile);
   }
   if (strcmp(&classEntered, "ESL") == 0) {
      eslChoice(eslFile);
   }
   if (strcmp(&classEntered, "FDSC") == 0) {
      fdscChoice(fdscFile);
   }
   if (strcmp(&classEntered, "FINC") == 0) {
      fincChoice(fincFile);
   }
   if (strcmp(&classEntered, "FISH") == 0) {
      fishChoice(fishFile);
   }
   if (strcmp(&classEntered, "FLCN") == 0) {
      flcnChoice(flcnFile);
   }
   if (strcmp(&classEntered, "FLFR") == 0) {
      flfrChoice(flfrFile);
   }
   if (strcmp(&classEntered, "FINC") == 0) {
      fincChoice(fincFile);
   }
   if (strcmp(&classEntered, "FLGK") == 0) {
      flgkChoice(flgkFile);
   }
   if (strcmp(&classEntered, "FLGR") == 0) {
      flgrChoice(flgrFile);
   }
   if (strcmp(&classEntered, "FLIT") == 0) {
      flitChoice(flitFile);
   }
   if (strcmp(&classEntered, "FLJP") == 0) {
      fljpChoice(fljpFile);
   }
   if (strcmp(&classEntered, "FLKN") == 0) {
      flknChoice(flknFile);
   }
   if (strcmp(&classEntered, "FLLN") == 0) {
      fllnChoice(fllnFile);
   }
   if (strcmp(&classEntered, "FLRU") == 0) {
      flruChoice(flruFile);
   }
   if (strcmp(&classEntered, "FLSP") == 0) {
      flspChoice(flspFile);
   }
   if (strcmp(&classEntered, "FOPR") == 0) {
      foprChoice(foprFile);
   }
   if (strcmp(&classEntered, "FORY") == 0) {
      foryChoice(foryFile);
   }
   if (strcmp(&classEntered, "FOUN") == 0) {
      founChoice(founFile);
   }
   if (strcmp(&classEntered, "FOWS") == 0) {
      fowsChoice(fowsFile);
   }
   if (strcmp(&classEntered, "GDES") == 0) {
      gdesChoice(gdesFile);
   }
   if (strcmp(&classEntered, "GEOG") == 0) {
      geogChoice(geogFile);
   }
   if (strcmp(&classEntered, "GEOL") == 0) {
      geolChoice(geolFile);
   }
   if (strcmp(&classEntered, "HADM") == 0) {
      hadmChoice(hadmFile);
   }
   if (strcmp(&classEntered, "HDFS") == 0) {
      hdfsChoice(hdfsFile);
   }
   if (strcmp(&classEntered, "HIED") == 0) {
      hiedChoice(hiedFile);
   }
   if (strcmp(&classEntered, "HIST") == 0) {
      histChoice(histFile);
   }
   if (strcmp(&classEntered, "HONR") == 0) {
      honrChoice(honrFile);
   }
   if (strcmp(&classEntered, "HORT") == 0) {
      hortChoice(hortFile);
   }
   if (strcmp(&classEntered, "HRMN") == 0) {
      hrmnChoice(hrmnFile);
   }
   if (strcmp(&classEntered, "HRMT") == 0) {
      hrmtChoice(hrmtFile);
   }
   if (strcmp(&classEntered, "HUSC") == 0) {
      huscChoice(huscFile);
   }
   if (strcmp(&classEntered, "INSY") == 0) {
      insyChoice(insyFile);
   }
   if (strcmp(&classEntered, "INTL") == 0) {
      intlChoice(intlFile);
   }
   if (strcmp(&classEntered, "ISMN") == 0) {
      ismnChoice(ismnFile);
   }
   if (strcmp(&classEntered, "JRNL") == 0) {
      jrnlChoice(jrnlFile);
   }
   if (strcmp(&classEntered, "KINE") == 0) {
      kineChoice(kineFile);
   }
   if (strcmp(&classEntered, "KINE") == 0) {
      kineChoice(kineFile);
   }
   if (strcmp(&classEntered, "LABT") == 0) {
      labtChoice(labtFile);
   }
   if (strcmp(&classEntered, "LAND") == 0) {
      landChoice(landFile);
   }
   if (strcmp(&classEntered, "LBSC") == 0) {
      lbscChoice(lbscFile);
   }
   if (strcmp(&classEntered, "LEAD") == 0) {
      leadChoice(leadFile);
   }
   if (strcmp(&classEntered, "MATH") == 0) {
      mathChoice(mathFile);
   }
   if (strcmp(&classEntered, "MATL") == 0) {
      matlChoice(matlFile);
   }
   if (strcmp(&classEntered, "MDIA") == 0) {
      mdiaChoice(mdiaFile);
   }
   if (strcmp(&classEntered, "MECH") == 0) {
      mechChoice(mechFile);
   }
   if (strcmp(&classEntered, "MKTG") == 0) {
      mktgChoice(mktgFile);
   }
   if (strcmp(&classEntered, "MNGT") == 0) {
      mngtChoice(mngtFile);
   }
   if (strcmp(&classEntered, "MUAP") == 0) {
      muapChoice(muapFile);
   }
   if (strcmp(&classEntered, "MUSE") == 0) {
      museChoice(museFile);
   }
   if (strcmp(&classEntered, "MUSI") == 0) {
      musiChoice(musiFile);
   }
   if (strcmp(&classEntered, "NURS") == 0) {
      nursChoice(nursFile);
   }
   if (strcmp(&classEntered, "PFEN") == 0) {
      pfenChoice(pfenFile);
   }
   if (strcmp(&classEntered, "PHED") == 0) {
      phedChoice(phedFile);
   }
   if (strcmp(&classEntered, "PHIL") == 0) {
      philChoice(philFile);
   }
   if (strcmp(&classEntered, "PHYS") == 0) {
      physChoice(physFile);
   }
   if (strcmp(&classEntered, "PLPA") == 0) {
      plpaChoice(plpaFile);
   }
   if (strcmp(&classEntered, "POLI") == 0) {
      poliChoice(poliFile);
   }
   if (strcmp(&classEntered, "PRCM") == 0) {
      prcmChoice(prcmFile);
   }
   if (strcmp(&classEntered, "PSYC") == 0) {
      psycChoice(psycFile);
   }
   if (strcmp(&classEntered, "PYPC") == 0) {
      pypcChoice(pypcFile);
   }
   if (strcmp(&classEntered, "RSED") == 0) {
      rsedChoice(rsedFile);
   }
   if (strcmp(&classEntered, "RSOC") == 0) {
      rsocChoice(rsocFile);
   }
   if (strcmp(&classEntered, "SCMH") == 0) {
      scmhChoice(scmhFile);
   }
   if (strcmp(&classEntered, "SCMN") == 0) {
      scmnChoice(scmnFile);
   }
   if (strcmp(&classEntered, "SOCY") == 0) {
      socyChoice(socyFile);
   }
   if (strcmp(&classEntered, "SOWO") == 0) {
      sowoChoice(sowoFile);
   }
   if (strcmp(&classEntered, "SPECIAL") == 0) {
      specialChoice(specialFile);
   }
   if (strcmp(&classEntered, "STAT") == 0) {
      statChoice(statFile);
   }
   if (strcmp(&classEntered, "SUST") == 0) {
      sustChoice(sustFile);
   }
   if (strcmp(&classEntered, "THEA") == 0) {
      theaChoice(theaFile);
   }
   if (strcmp(&classEntered, "SOCY") == 0) {
      socyChoice(socyFile);
   }
   if (strcmp(&classEntered, "UNIV") == 0) {
      univChoice(univFile);
   }
   if (strcmp(&classEntered, "WILD") == 0) {
      wildChoice(wildFile);
   }
   if (strcmp(&classEntered, "WMST") == 0) {
      wmstChoice(wmstFile);
   }
   
      
      
   printf("Please enter your class number\n");
   scanf("%s", &classNumber);         
   
   
   
     
   
   return 0; 
}

void openBaseFile(char baseClass[200][10])
{  
   FILE *baseClassFile;
   int i=0;
  

   baseClassFile = fopen(BASEFILE, "r");

   if (baseClassFile == NULL){
      printf ("File could not be opened, please try again\n");
     
   }
   else {
   
      while(fscanf (baseClassFile, "%s", baseClass[i]) != EOF){
         printf("%s", baseClass[i]);
         printf("\n");
         i++;
         
      }
      printf("\n\n\n\n");
      fclose(baseClassFile);
      
   }
  
 
}


void accountingChoice (char accountingFile[200][200])
{
   FILE *accountingFP;
   int i =0;
   char buffer[100];

   accountingFP = fopen(ACCOUNTING, "r");

   if (accountingFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, accountingFP)){
         strcpy (accountingFile[i], buffer);
         printf("%s\n", accountingFile[i]);
         i++;
      } 
      fclose(accountingFP);
      
   
   }
}

void adedChoice (char adedFile[200][200])
{
   FILE *adedFP;
   int i =0;
   char buffer[100];

   adedFP = fopen("adedFileContents.txt", "r");

   if (adedFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, adedFP)){
         strcpy(adedFile[i], buffer);
         printf("%s\n", adedFile[i]);
         i++;
      } 
      printf("\n");
      fclose(adedFP);
      
   
   }
}
void aeroChoice (char aeroFile[200][200])
{
   FILE *aeroFP;
   int i =0;
   char buffer[100];
   
   aeroFP = fopen("aeroFileContents.txt", "r");

   if (aeroFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, aeroFP)){
         strcpy(aeroFile[i], buffer);
         printf("%s\n", aeroFile[i]);
         i++;
      } 
      fclose(aeroFP);
      
   
   }
}
void agecChoice (char agecFile[200][200])
{
   FILE *agecFP;
   int i =0;
   char buffer[100];

   agecFP = fopen("agecFileContents.txt", "r");

   if (agecFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, agecFP)){
         strcpy(agecFile[i], buffer);
         printf("%s\n", agecFile[i]);
         i++;
      } 
      fclose(agecFP);
      
   
   }
}
void agrnChoice (char agrnFile[200][200])
{
   FILE *agrnFP;
   int i =0;
   char buffer[100];

   agrnFP = fopen("agrnFileContents.txt", "r");

   if (agrnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, agrnFP)){
         strcpy(agrnFile[i], buffer);
         printf("%s\n", agrnFile[i]);
         i++;
      } 
      fclose(agrnFP);
      
   
   }
}

void anscChoice (char anscFile[200][200])
{
   FILE *anscFP;
   int i =0;
   char buffer[100];

   anscFP = fopen("anscFileContents.txt", "r");

   if (anscFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, anscFP)){
         strcpy(anscFile[i], buffer);
         printf("%s\n", anscFile[i]);
         i++;
      } 
      fclose(anscFP);
      
   
   }
}

void anthChoice (char anthFile[200][200])
{
   FILE *anthFP;
   int i =0;
   char buffer[100];

   anthFP = fopen("anthFileContents.txt", "r");

   if (anthFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, anthFP)){
         strcpy(anthFile[i], buffer);
         printf("%s\n", anthFile[i]);
         i++;
      } 
      fclose(anthFP);
      
   
   }
}

void archChoice (char archFile[200][200])
{
   FILE *archFP;
   int i =0;
   char buffer[100];

   archFP = fopen("archFileContents.txt", "r");

   if (archFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, archFP)){
         strcpy(archFile[i], buffer);
         printf("%s\n", archFile[i]);
         i++;
      } 
      fclose(archFP);
   }
}     

void artsChoice (char artsFile[200][200])
{
   FILE *artsFP;
   int i =0;
   char buffer[100];

   artsFP = fopen("artsFileContents.txt", "r");

   if (artsFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, artsFP)){
         strcpy(artsFile[i], buffer);
         printf("%s\n", artsFile[i]);
         i++;
      } 
      fclose(artsFP);
   }
} 

void avmgChoice (char avmgFile[200][200])
{
   FILE *avmgFP;
   int i =0;
   char buffer[100];

   avmgFP = fopen("avmgFileContents.txt", "r");

   if (avmgFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, avmgFP)){
         strcpy(avmgFile[i], buffer);
         printf("%s\n", avmgFile[i]);
         i++;
      } 
      fclose(avmgFP);
   }
} 

void bcheChoice (char bcheFile[200][200])
{
   FILE *bcheFP;
   int i =0;
   char buffer[100];

   bcheFP = fopen("bcheFileContents.txt", "r");

   if (bcheFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, bcheFP)){
         strcpy(bcheFile[i], buffer);
         printf("%s\n", bcheFile[i]);
         i++;
      } 
      fclose(bcheFP);
   }
} 

void biolChoice (char biolFile[200][200])
{
   FILE *biolFP;
   int i =0;
   char buffer[100];

   biolFP = fopen("biolFileContents.txt", "r");

   if (biolFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, biolFP)){
         strcpy(biolFile[i], buffer);
         printf("%s\n", biolFile[i]);
         i++;
      } 
      fclose(biolFP);
   }
} 

void bsciChoice (char bsciFile[200][200])
{
   FILE *bsciFP;
   int i =0;
   char buffer[100];

   bsciFP = fopen("bsciFileContents.txt", "r");

   if (bsciFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, bsciFP)){
         strcpy(bsciFile[i], buffer);
         printf("%s\n", bsciFile[i]);
         i++;
      } 
      fclose(bsciFP);
   }
} 

void bsenChoice (char bsenFile[200][200])
{
   FILE *bsenFP;
   int i =0;
   char buffer[100];

   bsenFP = fopen("bsenFileContents.txt", "r");

   if (bsenFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, bsenFP)){
         strcpy(bsenFile[i], buffer);
         printf("%s\n", bsenFile[i]);
         i++;
      } 
      fclose(bsenFP);
   }
} 

void bualChoice (char bualFile[200][200])
{
   FILE *bualFP;
   int i =0;
   char buffer[100];

   bualFP = fopen("bualFileContents.txt", "r");

   if (bualFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, bualFP)){
         strcpy(bualFile[i], buffer);
         printf("%s\n", bualFile[i]);
         i++;
      } 
      fclose(bualFP);
   }
} 

void busiChoice (char busiFile[200][200])
{
   FILE *busiFP;
   int i =0;
   char buffer[100];

   busiFP = fopen("busiFileContents.txt", "r");

   if (busiFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, busiFP)){
         strcpy(busiFile[i], buffer);
         printf("%s\n", busiFile[i]);
         i++;
      } 
      fclose(busiFP);
   }
} 

void cadsChoice (char cadsFile[200][200])
{
   FILE *cadsFP;
   int i =0;
   char buffer[100];

   cadsFP = fopen("cadsFileContents.txt", "r");

   if (cadsFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, cadsFP)){
         strcpy(cadsFile[i], buffer);
         printf("%s\n", cadsFile[i]);
         i++;
      } 
      fclose(cadsFP);
   }
} 

void ccrnChoice (char ccrnFile[200][200])
{
   FILE *ccrnFP;
   int i =0;
   char buffer[100];

   ccrnFP = fopen("ccrnFileContents.txt", "r");

   if (ccrnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, ccrnFP)){
         strcpy(ccrnFile[i], buffer);
         printf("%s\n", ccrnFile[i]);
         i++;
      } 
      fclose(ccrnFP);
   }
}

void chemChoice (char chemFile[200][200])
{
   FILE *chemFP;
   int i =0;
   char buffer[100];

   chemFP = fopen("chemFileContents.txt", "r");

   if (chemFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, chemFP)){
         strcpy(chemFile[i], buffer);
         printf("%s\n", chemFile[i]);
         i++;
      } 
      fclose(chemFP);
   }
}

void chenChoice (char chenFile[200][200])
{
   FILE *chenFP;
   int i =0;
   char buffer[100];

   chenFP = fopen("chenFileContents.txt", "r");

   if (chenFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, chenFP)){
         strcpy(chenFile[i], buffer);
         printf("%s\n", chenFile[i]);
         i++;
      } 
      fclose(chenFP);
   }
}

void civlChoice (char civlFile[200][200])
{
   FILE *civlFP;
   int i =0;
   char buffer[100];

   civlFP = fopen("civlFileContents.txt", "r");

   if (civlFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, civlFP)){
         strcpy(civlFile[i], buffer);
         printf("%s\n", civlFile[i]);
         i++;
      } 
      fclose(civlFP);
   }
}

void cmdsChoice (char cmdsFile[200][200])
{
   FILE *cmdsFP;
   int i =0;
   char buffer[100];

   cmdsFP = fopen("cmdsFileContents.txt", "r");

   if (cmdsFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, cmdsFP)){
         strcpy(cmdsFile[i], buffer);
         printf("%s\n", cmdsFile[i]);
         i++;
      } 
      fclose(cmdsFP);
   }
}

void cmjnChoice (char cmjnFile[200][200])
{
   FILE *cmjnFP;
   int i =0;
   char buffer[100];

   cmjnFP = fopen("cmjnFileContents.txt", "r");

   if (cmjnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, cmjnFP)){
         strcpy(cmjnFile[i], buffer);
         printf("%s\n", cmjnFile[i]);
         i++;
      } 
      fclose(cmjnFP);
   }
}

void commChoice (char commFile[200][200])
{
   FILE *commFP;
   int i =0;
   char buffer[100];

   commFP = fopen("commFileContents.txt", "r");

   if (commFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, commFP)){
         strcpy(commFile[i], buffer);
         printf("%s\n", commFile[i]);
         i++;
      } 
      fclose(commFP);
   }
}
void compChoice (char compFile[200][200])
{
   FILE *compFP;
   int i =0;
   char buffer[100];

   compFP = fopen("compFileContents.txt", "r");

   if (compFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, compFP)){
         strcpy(compFile[i], buffer);
         printf("%s\n", compFile[i]);
         i++;
      } 
      fclose(compFP);
   }
}

void counChoice (char counFile[200][200])
{
   FILE *counFP;
   int i =0;
   char buffer[100];

   counFP = fopen("counFileContents.txt", "r");

   if (counFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, counFP)){
         strcpy(counFile[i], buffer);
         printf("%s\n", counFile[i]);
         i++;
      } 
      fclose(counFP);
   }
}

void cplnChoice (char cplnFile[200][200])
{
   FILE *cplnFP;
   int i =0;
   char buffer[100];

   cplnFP = fopen("cplnFileContents.txt", "r");

   if (cplnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, cplnFP)){
         strcpy(cplnFile[i], buffer);
         printf("%s\n", cplnFile[i]);
         i++;
      } 
      fclose(cplnFP);
   }
}

void ctctChoice (char ctctFile[200][200])
{
   FILE *ctctFP;
   int i =0;
   char buffer[100];

   ctctFP = fopen("ctctFileContents.txt", "r");

   if (ctctFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, ctctFP)){
         strcpy(ctctFile[i], buffer);
         printf("%s\n", ctctFile[i]);
         i++;
      } 
      fclose(ctctFP);
   }
}

void ctecChoice (char ctecFile[200][200])
{
   FILE *ctecFP;
   int i =0;
   char buffer[100];

   ctecFP = fopen("ctecFileContents.txt", "r");

   if (ctecFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, ctecFP)){
         strcpy(ctecFile[i], buffer);
         printf("%s\n", ctecFile[i]);
         i++;
      } 
      fclose(ctecFP);
   }
}

void ctesChoice (char ctesFile[200][200])
{
   FILE *ctesFP;
   int i =0;
   char buffer[100];

   ctesFP = fopen("ctesFileContents.txt", "r");

   if (ctesFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fgets(buffer, 100, ctesFP)){
         strcpy(ctesFile[i], buffer);
         printf("%s\n", ctesFile[i]);
         i++;
      } 
      fclose(ctesFP);
   }
}

void ctmuChoice (char ctmuFile[200][200])
{
   FILE *ctmuFP;
   int i =0;

   ctmuFP = fopen("ctmuFileContents.txt", "r");

   if (ctmuFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(ctmuFP, "%s", ctmuFile[i]) != EOF){
         printf("%s\n", ctmuFile[i]);
         i++;
      } 
      printf("\n");
      fclose(ctmuFP);
   }
}

void ctrdChoice (char ctrdFile[200][200])
{
   FILE *ctrdFP;
   int i =0;

   ctrdFP = fopen("ctrdFileContents.txt", "r");

   if (ctrdFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(ctrdFP, "%s", ctrdFile[i]) != EOF){
         printf("%s\n", ctrdFile[i]);
         i++;
      } 
      printf("\n");
      fclose(ctrdFP);
   }
}

void ctseChoice (char ctseFile[200][200])
{
   FILE *ctseFP;
   int i =0;

   ctseFP = fopen("ctseFileContents.txt", "r");

   if (ctseFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(ctseFP, "%s", ctseFile[i]) != EOF){
         printf("%s\n", ctseFile[i]);
         i++;
      } 
      printf("\n");
      fclose(ctseFP);
   }
}

void econChoice (char econFile[200][200])
{
   FILE *econFP;
   int i =0;

   econFP = fopen("econFileContents.txt", "r");

   if (econFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(econFP, "%s", econFile[i]) != EOF){
         printf("%s\n", econFile[i]);
         i++;
      } 
      printf("\n");
      fclose(econFP);
   }
}

void edldChoice (char edldFile[200][200])
{
   FILE *edldFP;
   int i =0;

   edldFP = fopen("edldFileContents.txt", "r");

   if (edldFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(edldFP, "%s", edldFile[i]) != EOF){
         printf("%s\n", edldFile[i]);
         i++;
      } 
      printf("\n");
      fclose(edldFP);
   }
}

void edmdChoice (char edmdFile[200][200])
{
   FILE *edmdFP;
   int i =0;

   edmdFP = fopen("edmdFileContents.txt", "r");

   if (edmdFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(edmdFP, "%s", edmdFile[i]) != EOF){
         printf("%s\n", edmdFile[i]);
         i++;
      } 
      printf("\n");
      fclose(edmdFP);
   }
}

void elecChoice (char elecFile[200][200])
{
   FILE *elecFP;
   int i =0;

   elecFP = fopen("elecFileContents.txt", "r");

   if (elecFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(elecFP, "%s", elecFile[i]) != EOF){
         printf("%s\n", elecFile[i]);
         i++;
      } 
      printf("\n");
      fclose(elecFP);
   }
}

void enfbChoice (char enfbFile[200][200])
{
   FILE *enfbFP;
   int i =0;

   enfbFP = fopen("enfbFileContents.txt", "r");

   if (enfbFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(enfbFP, "%s", enfbFile[i]) != EOF){
         printf("%s\n", enfbFile[i]);
         i++;
      } 
      printf("\n");
      fclose(enfbFP);
   }
}

void englChoice (char englFile[200][200])
{
   FILE *englFP;
   int i =0;

   englFP = fopen("englFileContents.txt", "r");

   if (englFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(englFP, "%s", englFile[i]) != EOF){
         printf("%s\n", englFile[i]);
         i++;
      } 
      printf("\n");
      fclose(englFP);
   }
}
void engrChoice (char engrFile[200][200])
{
   FILE *engrFP;
   int i =0;

   engrFP = fopen("engrFileContents.txt", "r");

   if (engrFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(engrFP, "%s", engrFile[i]) != EOF){
         printf("%s\n", engrFile[i]);
         i++;
      } 
      printf("\n");
      fclose(engrFP);
   }
}
void entmChoice (char entmFile[200][200])
{
   FILE *entmFP;
   int i =0;

   entmFP = fopen("entmFileContents.txt", "r");

   if (entmFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(entmFP, "%s", entmFile[i]) != EOF){
         printf("%s\n", entmFile[i]);
         i++;
      } 
      printf("\n");
      fclose(entmFP);
   }
}
void enviChoice (char enviFile[200][200])
{
   FILE *enviFP;
   int i =0;

   enviFP = fopen("enviFileContents.txt", "r");

   if (enviFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(enviFP, "%s", enviFile[i]) != EOF){
         printf("%s\n", enviFile[i]);
         i++;
      } 
      printf("\n");
      fclose(enviFP);
   }
}
void epsyChoice (char epsyFile[200][200])
{
   FILE *epsyFP;
   int i =0;

   epsyFP = fopen("epsyFileContents.txt", "r");

   if (epsyFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(epsyFP, "%s", epsyFile[i]) != EOF){
         printf("%s\n", epsyFile[i]);
         i++;
      } 
      printf("\n");
      fclose(epsyFP);
   }
}
void ermaChoice (char ermaFile[200][200])
{
   FILE *ermaFP;
   int i =0;

   ermaFP = fopen("ermaFileContents.txt", "r");

   if (ermaFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(ermaFP, "%s", ermaFile[i]) != EOF){
         printf("%s\n", ermaFile[i]);
         i++;
      } 
      printf("\n");
      fclose(ermaFP);
   }
}
void eslChoice (char eslFile[200][200])
{
   FILE *eslFP;
   int i =0;

   eslFP = fopen("eslFileContents.txt", "r");

   if (eslFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(eslFP, "%s", eslFile[i]) != EOF){
         printf("%s\n", eslFile[i]);
         i++;
      } 
      printf("\n");
      fclose(eslFP);
   }
}

void fdscChoice (char fdscFile[200][200])
{
   FILE *fdscFP;
   int i =0;

   fdscFP = fopen("fdscFileContents.txt", "r");

   if (fdscFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(fdscFP, "%s", fdscFile[i]) != EOF){
         printf("%s\n", fdscFile[i]);
         i++;
      } 
      printf("\n");
      fclose(fdscFP);
   }
}
void fincChoice (char fincFile[200][200])
{
   FILE *fincFP;
   int i =0;

   fincFP = fopen("fincFileContents.txt", "r");

   if (fincFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(fincFP, "%s", fincFile[i]) != EOF){
         printf("%s\n", fincFile[i]);
         i++;
      } 
      printf("\n");
      fclose(fincFP);
   }
}
void fishChoice (char fishFile[200][200])
{
   FILE *fishFP;
   int i =0;

   fishFP = fopen("fishFileContents.txt", "r");

   if (fishFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(fishFP, "%s", fishFile[i]) != EOF){
         printf("%s\n", fishFile[i]);
         i++;
      } 
      printf("\n");
      fclose(fishFP);
   }
}
void flcnChoice (char flcnFile[200][200])
{
   FILE *flcnFP;
   int i =0;

   flcnFP = fopen("flcnFileContents.txt", "r");

   if (flcnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(flcnFP, "%s", flcnFile[i]) != EOF){
         printf("%s\n", flcnFile[i]);
         i++;
      } 
      printf("\n");
      fclose(flcnFP);
   }
}
void flfrChoice (char flfrFile[200][200])
{
   FILE *flfrFP;
   int i =0;

   flfrFP = fopen("flfrFileContents.txt", "r");

   if (flfrFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(flfrFP, "%s", flfrFile[i]) != EOF){
         printf("%s\n", flfrFile[i]);
         i++;
      } 
      printf("\n");
      fclose(flfrFP);
   }
}
void flgkChoice (char flgkFile[200][200])
{
   FILE *flgkFP;
   int i =0;

   flgkFP = fopen("flgkFileContents.txt", "r");

   if (flgkFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(flgkFP, "%s", flgkFile[i]) != EOF){
         printf("%s\n", flgkFile[i]);
         i++;
      } 
      printf("\n");
      fclose(flgkFP);
   }
}
void flgrChoice (char flgrFile[200][200])
{
   FILE *flgrFP;
   int i =0;

   flgrFP = fopen("flgrFileContents.txt", "r");

   if (flgrFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(flgrFP, "%s", flgrFile[i]) != EOF){
         printf("%s\n", flgrFile[i]);
         i++;
      } 
      printf("\n");
      fclose(flgrFP);
   }
}
void flitChoice (char flitFile[200][200])
{
   FILE *flitFP;
   int i =0;

   flitFP = fopen("flitFileContents.txt", "r");

   if (flitFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(flitFP, "%s", flitFile[i]) != EOF){
         printf("%s\n", flitFile[i]);
         i++;
      } 
      printf("\n");
      fclose(flitFP);
   }
}
void fljpChoice (char fljpFile[200][200])
{
   FILE *fljpFP;
   int i =0;

   fljpFP = fopen("fljpFileContents.txt", "r");

   if (fljpFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(fljpFP, "%s", fljpFile[i]) != EOF){
         printf("%s\n", fljpFile[i]);
         i++;
      } 
      printf("\n");
      fclose(fljpFP);
   }
}
void flknChoice (char flknFile[200][200])
{
   FILE *flknFP;
   int i =0;

   flknFP = fopen("flknFileContents.txt", "r");

   if (flknFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(flknFP, "%s", flknFile[i]) != EOF){
         printf("%s\n", flknFile[i]);
         i++;
      } 
      printf("\n");
      fclose(flknFP);
   }
}
void fllnChoice (char fllnFile[200][200])
{
   FILE *fllnFP;
   int i =0;

   fllnFP = fopen("fllnFileContents.txt", "r");

   if (fllnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(fllnFP, "%s", fllnFile[i]) != EOF){
         printf("%s\n", fllnFile[i]);
         i++;
      } 
      printf("\n");
      fclose(fllnFP);
   }
}
void flruChoice (char flruFile[200][200])
{
   FILE *flruFP;
   int i =0;

   flruFP = fopen("flruFileContents.txt", "r");

   if (flruFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(flruFP, "%s", flruFile[i]) != EOF){
         printf("%s\n", flruFile[i]);
         i++;
      } 
      printf("\n");
      fclose(flruFP);
   }
}
void flspChoice (char flspFile[200][200])
{
   FILE *flspFP;
   int i =0;

   flspFP = fopen("flspFileContents.txt", "r");

   if (flspFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(flspFP, "%s", flspFile[i]) != EOF){
         printf("%s\n", flspFile[i]);
         i++;
      } 
      printf("\n");
      fclose(flspFP);
   }
}
void foprChoice (char foprFile[200][200])
{
   FILE *foprFP;
   int i =0;

   foprFP = fopen("foprFileContents.txt", "r");

   if (foprFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(foprFP, "%s", foprFile[i]) != EOF){
         printf("%s\n", foprFile[i]);
         i++;
      } 
      printf("\n");
      fclose(foprFP);
   }
}
void foryChoice (char foryFile[200][200])
{
   FILE *foryFP;
   int i =0;

   foryFP = fopen("foryFileContents.txt", "r");

   if (foryFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(foryFP, "%s", foryFile[i]) != EOF){
         printf("%s\n", foryFile[i]);
         i++;
      } 
      printf("\n");
      fclose(foryFP);
   }
}
void founChoice (char founFile[200][200])
{
   FILE *founFP;
   int i =0;

   founFP = fopen("founFileContents.txt", "r");

   if (founFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(founFP, "%s", founFile[i]) != EOF){
         printf("%s\n", founFile[i]);
         i++;
      } 
      printf("\n");
      fclose(founFP);
   }
}
void fowsChoice (char fowsFile[200][200])
{
   FILE *fowsFP;
   int i =0;

   fowsFP = fopen("fowsFileContents.txt", "r");

   if (fowsFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(fowsFP, "%s", fowsFile[i]) != EOF){
         printf("%s\n", fowsFile[i]);
         i++;
      } 
      printf("\n");
      fclose(fowsFP);
   }
}
void gdesChoice (char gdesFile[200][200])
{
   FILE *gdesFP;
   int i =0;

   gdesFP = fopen("gdesFileContents.txt", "r");

   if (gdesFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(gdesFP, "%s", gdesFile[i]) != EOF){
         printf("%s\n", gdesFile[i]);
         i++;
      } 
      printf("\n");
      fclose(gdesFP);
   }
}
void geogChoice (char geogFile[200][200])
{
   FILE *geogFP;
   int i =0;

   geogFP = fopen("geogFileContents.txt", "r");

   if (geogFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(geogFP, "%s", geogFile[i]) != EOF){
         printf("%s\n", geogFile[i]);
         i++;
      } 
      printf("\n");
      fclose(geogFP);
   }
}
void geolChoice (char geolFile[200][200])
{
   FILE *geolFP;
   int i =0;

   geolFP = fopen("geolFileContents.txt", "r");

   if (geolFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(geolFP, "%s", geolFile[i]) != EOF){
         printf("%s\n", geolFile[i]);
         i++;
      } 
      printf("\n");
      fclose(geolFP);
   }
}
void hadmChoice (char hadmFile[200][200])
{
   FILE *hadmFP;
   int i =0;

   hadmFP = fopen("hadmFileContents.txt", "r");

   if (hadmFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(hadmFP, "%s", hadmFile[i]) != EOF){
         printf("%s\n", hadmFile[i]);
         i++;
      } 
      printf("\n");
      fclose(hadmFP);
   }
}
void hdfsChoice (char hdfsFile[200][200])
{
   FILE *hdfsFP;
   int i =0;

   hdfsFP = fopen("hdfsFileContents.txt", "r");

   if (hdfsFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(hdfsFP, "%s", hdfsFile[i]) != EOF){
         printf("%s\n", hdfsFile[i]);
         i++;
      } 
      printf("\n");
      fclose(hdfsFP);
   }
}
void hiedChoice (char hiedFile[200][200])
{
   FILE *hiedFP;
   int i =0;

   hiedFP = fopen("hiedFileContents.txt", "r");

   if (hiedFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(hiedFP, "%s", hiedFile[i]) != EOF){
         printf("%s\n", hiedFile[i]);
         i++;
      } 
      printf("\n");
      fclose(hiedFP);
   }
}
void histChoice (char histFile[200][200])
{
   FILE *histFP;
   int i =0;

   histFP = fopen("histFileContents.txt", "r");

   if (histFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(histFP, "%s", histFile[i]) != EOF){
         printf("%s\n", histFile[i]);
         i++;
      } 
      printf("\n");
      fclose(histFP);
   }
}
void honrChoice (char honrFile[200][200])
{
   FILE *honrFP;
   int i =0;

   honrFP = fopen("honrFileContents.txt", "r");

   if (honrFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(honrFP, "%s", honrFile[i]) != EOF){
         printf("%s\n", honrFile[i]);
         i++;
      } 
      printf("\n");
      fclose(honrFP);
   }
}
void hortChoice (char hortFile[200][200])
{
   FILE *hortFP;
   int i =0;

   hortFP = fopen("hortFileContents.txt", "r");

   if (hortFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(hortFP, "%s", hortFile[i]) != EOF){
         printf("%s\n", hortFile[i]);
         i++;
      } 
      printf("\n");
      fclose(hortFP);
   }
}
void hrmnChoice (char hrmnFile[200][200])
{
   FILE *hrmnFP;
   int i =0;

   hrmnFP = fopen("hrmnFileContents.txt", "r");

   if (hrmnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(hrmnFP, "%s", hrmnFile[i]) != EOF){
         printf("%s\n", hrmnFile[i]);
         i++;
      } 
      printf("\n");
      fclose(hrmnFP);
   }
}
void hrmtChoice (char hrmtFile[200][200])
{
   FILE *hrmtFP;
   int i =0;

   hrmtFP = fopen("hrmtFileContents.txt", "r");

   if (hrmtFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(hrmtFP, "%s", hrmtFile[i]) != EOF){
         printf("%s\n", hrmtFile[i]);
         i++;
      } 
      printf("\n");
      fclose(hrmtFP);
   }
}
void huscChoice (char huscFile[200][200])
{
   FILE *huscFP;
   int i =0;

   huscFP = fopen("huscFileContents.txt", "r");

   if (huscFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(huscFP, "%s", huscFile[i]) != EOF){
         printf("%s\n", huscFile[i]);
         i++;
      } 
      printf("\n");
      fclose(huscFP);
   }
}
void insyChoice (char insyFile[200][200])
{
   FILE *insyFP;
   int i =0;

   insyFP = fopen("insyFileContents.txt", "r");

   if (insyFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(insyFP, "%s", insyFile[i]) != EOF){
         printf("%s\n", insyFile[i]);
         i++;
      } 
      printf("\n");
      fclose(insyFP);
   }
}
void intlChoice (char intlFile[200][200])
{
   FILE *intlFP;
   int i =0;

   intlFP = fopen("intlFileContents.txt", "r");

   if (intlFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(intlFP, "%s", intlFile[i]) != EOF){
         printf("%s\n", intlFile[i]);
         i++;
      } 
      printf("\n");
      fclose(intlFP);
   }
}
void ismnChoice (char ismnFile[200][200])
{
   FILE *ismnFP;
   int i =0;

   ismnFP = fopen("ismnFileContents.txt", "r");

   if (ismnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(ismnFP, "%s", ismnFile[i]) != EOF){
         printf("%s\n", ismnFile[i]);
         i++;
      } 
      printf("\n");
      fclose(ismnFP);
   }
}
void jrnlChoice (char jrnlFile[200][200])
{
   FILE *jrnlFP;
   int i =0;

   jrnlFP = fopen("jrnlFileContents.txt", "r");

   if (jrnlFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(jrnlFP, "%s", jrnlFile[i]) != EOF){
         printf("%s\n", jrnlFile[i]);
         i++;
      } 
      printf("\n");
      fclose(jrnlFP);
   }
}
void kineChoice (char kineFile[200][200])
{
   FILE *kineFP;
   int i =0;

   kineFP = fopen("kineFileContents.txt", "r");

   if (kineFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(kineFP, "%s", kineFile[i]) != EOF){
         printf("%s\n", kineFile[i]);
         i++;
      } 
      printf("\n");
      fclose(kineFP);
   }
}
void labtChoice (char labtFile[200][200])
{
   FILE *labtFP;
   int i =0;

   labtFP = fopen("labtFileContents.txt", "r");

   if (labtFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(labtFP, "%s", labtFile[i]) != EOF){
         printf("%s\n", labtFile[i]);
         i++;
      } 
      printf("\n");
      fclose(labtFP);
   }
}
void landChoice (char landFile[200][200])
{
   FILE *landFP;
   int i =0;

   landFP = fopen("landFileContents.txt", "r");

   if (landFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(landFP, "%s", landFile[i]) != EOF){
         printf("%s\n", landFile[i]);
         i++;
      } 
      printf("\n");
      fclose(landFP);
   }
}
void lbscChoice (char lbscFile[200][200])
{
   FILE *lbscFP;
   int i =0;

   lbscFP = fopen("lbscFileContents.txt", "r");

   if (lbscFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(lbscFP, "%s", lbscFile[i]) != EOF){
         printf("%s\n", lbscFile[i]);
         i++;
      } 
      printf("\n");
      fclose(lbscFP);
   }
}
void leadChoice (char leadFile[200][200])
{
   FILE *leadFP;
   int i =0;

   leadFP = fopen("leadFileContents.txt", "r");

   if (leadFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(leadFP, "%s", leadFile[i]) != EOF){
         printf("%s\n", leadFile[i]);
         i++;
      } 
      printf("\n");
      fclose(leadFP);
   }
}
void mathChoice (char mathFile[200][200])
{
   FILE *mathFP;
   int i =0;

   mathFP = fopen("mathFileContents.txt", "r");

   if (mathFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(mathFP, "%s", mathFile[i]) != EOF){
         printf("%s\n", mathFile[i]);
         i++;
      } 
      printf("\n");
      fclose(mathFP);
   }
}
void matlChoice (char matlFile[200][200])
{
   FILE *matlFP;
   int i =0;

   matlFP = fopen("matlFileContents.txt", "r");

   if (matlFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(matlFP, "%s", matlFile[i]) != EOF){
         printf("%s\n", matlFile[i]);
         i++;
      } 
      printf("\n");
      fclose(matlFP);
   }
}
void mdiaChoice (char mdiaFile[200][200])
{
   FILE *mdiaFP;
   int i =0;

   mdiaFP = fopen("mdiaFileContents.txt", "r");

   if (mdiaFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(mdiaFP, "%s", mdiaFile[i]) != EOF){
         printf("%s\n", mdiaFile[i]);
         i++;
      } 
      printf("\n");
      fclose(mdiaFP);
   }
}
void mechChoice (char mechFile[200][200])
{
   FILE *mechFP;
   int i =0;

   mechFP = fopen("mechFileContents.txt", "r");

   if (mechFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(mechFP, "%s", mechFile[i]) != EOF){
         printf("%s\n", mechFile[i]);
         i++;
      } 
      printf("\n");
      fclose(mechFP);
   }
}
void mktgChoice (char mktgFile[200][200])
{
   FILE *mktgFP;
   int i =0;

   mktgFP = fopen("mktgFileContents.txt", "r");

   if (mktgFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(mktgFP, "%s", mktgFile[i]) != EOF){
         printf("%s\n", mktgFile[i]);
         i++;
      } 
      printf("\n");
      fclose(mktgFP);
   }
}
void mngtChoice (char mngtFile[200][200])
{
   FILE *mngtFP;
   int i =0;

   mngtFP = fopen("mngtFileContents.txt", "r");

   if (mngtFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(mngtFP, "%s", mngtFile[i]) != EOF){
         printf("%s\n", mngtFile[i]);
         i++;
      } 
      printf("\n");
      fclose(mngtFP);
   }
}
void muapChoice (char muapFile[200][200])
{
   FILE *muapFP;
   int i =0;

   muapFP = fopen("muapFileContents.txt", "r");

   if (muapFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(muapFP, "%s", muapFile[i]) != EOF){
         printf("%s\n", muapFile[i]);
         i++;
      } 
      printf("\n");
      fclose(muapFP);
   }
}
void museChoice (char museFile[200][200])
{
   FILE *museFP;
   int i =0;

   museFP = fopen("museFileContents.txt", "r");

   if (museFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(museFP, "%s", museFile[i]) != EOF){
         printf("%s\n", museFile[i]);
         i++;
      } 
      printf("\n");
      fclose(museFP);
   }
}
void musiChoice (char musiFile[200][200])
{
   FILE *musiFP;
   int i =0;

   musiFP = fopen("musiFileContents.txt", "r");

   if (musiFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(musiFP, "%s", musiFile[i]) != EOF){
         printf("%s\n", musiFile[i]);
         i++;
      } 
      printf("\n");
      fclose(musiFP);
   }
}
void ntriChoice (char ntriFile[200][200])
{
   FILE *ntriFP;
   int i =0;

   ntriFP = fopen("ntriFileContents.txt", "r");

   if (ntriFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(ntriFP, "%s", ntriFile[i]) != EOF){
         printf("%s\n", ntriFile[i]);
         i++;
      } 
      printf("\n");
      fclose(ntriFP);
   }
}
void nursChoice (char nursFile[200][200])
{
   FILE *nursFP;
   int i =0;

   nursFP = fopen("nursFileContents.txt", "r");

   if (nursFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(nursFP, "%s", nursFile[i]) != EOF){
         printf("%s\n", nursFile[i]);
         i++;
      } 
      printf("\n");
      fclose(nursFP);
   }
}
void pfenChoice (char pfenFile[200][200])
{
   FILE *pfenFP;
   int i =0;

   pfenFP = fopen("pfenFileContents.txt", "r");

   if (pfenFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(pfenFP, "%s", pfenFile[i]) != EOF){
         printf("%s\n", pfenFile[i]);
         i++;
      } 
      printf("\n");
      fclose(pfenFP);
   }
}
void phedChoice (char phedFile[200][200])
{
   FILE *phedFP;
   int i =0;

   phedFP = fopen("phedFileContents.txt", "r");

   if (phedFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(phedFP, "%s", phedFile[i]) != EOF){
         printf("%s\n", phedFile[i]);
         i++;
      } 
      printf("\n");
      fclose(phedFP);
   }
}
void philChoice (char philFile[200][200])
{
   FILE *philFP;
   int i =0;

   philFP = fopen("philFileContents.txt", "r");

   if (philFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(philFP, "%s", philFile[i]) != EOF){
         printf("%s\n", philFile[i]);
         i++;
      } 
      printf("\n");
      fclose(philFP);
   }
}
void physChoice (char physFile[200][200])
{
   FILE *physFP;
   int i =0;

   physFP = fopen("physFileContents.txt", "r");

   if (physFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(physFP, "%s", physFile[i]) != EOF){
         printf("%s\n", physFile[i]);
         i++;
      } 
      printf("\n");
      fclose(physFP);
   }
}
void plpaChoice (char plpaFile[200][200])
{
   FILE *plpaFP;
   int i =0;

   plpaFP = fopen("plpaFileContents.txt", "r");

   if (plpaFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(plpaFP, "%s", plpaFile[i]) != EOF){
         printf("%s\n", plpaFile[i]);
         i++;
      } 
      printf("\n");
      fclose(plpaFP);
   }
}
void poliChoice (char poliFile[200][200])
{
   FILE *poliFP;
   int i =0;

   poliFP = fopen("poliFileContents.txt", "r");

   if (poliFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(poliFP, "%s", poliFile[i]) != EOF){
         printf("%s\n", poliFile[i]);
         i++;
      } 
      printf("\n");
      fclose(poliFP);
   }
}
void prcmChoice (char prcmFile[200][200])
{
   FILE *prcmFP;
   int i =0;

   prcmFP = fopen("prcmFileContents.txt", "r");

   if (prcmFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(prcmFP, "%s", prcmFile[i]) != EOF){
         printf("%s\n", prcmFile[i]);
         i++;
      } 
      printf("\n");
      fclose(prcmFP);
   }
}
void psycChoice (char psycFile[200][200])
{
   FILE *psycFP;
   int i =0;

   psycFP = fopen("psycFileContents.txt", "r");

   if (psycFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(psycFP, "%s", psycFile[i]) != EOF){
         printf("%s\n", psycFile[i]);
         i++;
      } 
      printf("\n");
      fclose(psycFP);
   }
}
void pydiChoice (char pydiFile[200][200])
{
   FILE *pydiFP;
   int i =0;

   pydiFP = fopen("pydiFileContents.txt", "r");

   if (pydiFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(pydiFP, "%s", pydiFile[i]) != EOF){
         printf("%s\n", pydiFile[i]);
         i++;
      } 
      printf("\n");
      fclose(pydiFP);
   }
}
void pypcChoice (char pypcFile[200][200])
{
   FILE *pypcFP;
   int i =0;

   pypcFP = fopen("pypcFileContents.txt", "r");

   if (pypcFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(pypcFP, "%s", pypcFile[i]) != EOF){
         printf("%s\n", pypcFile[i]);
         i++;
      } 
      printf("\n");
      fclose(pypcFP);
   }
}
void rsedChoice (char rsedFile[200][200])
{
   FILE *rsedFP;
   int i =0;

   rsedFP = fopen("rsedFileContents.txt", "r");

   if (rsedFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(rsedFP, "%s", rsedFile[i]) != EOF){
         printf("%s\n", rsedFile[i]);
         i++;
      } 
      printf("\n");
      fclose(rsedFP);
   }
}
void rsocChoice (char rsocFile[200][200])
{
   FILE *rsocFP;
   int i =0;

   rsocFP = fopen("rsocFileContents.txt", "r");

   if (rsocFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(rsocFP, "%s", rsocFile[i]) != EOF){
         printf("%s\n", rsocFile[i]);
         i++;
      } 
      printf("\n");
      fclose(rsocFP);
   }
}
void scmhChoice (char scmhFile[200][200])
{
   FILE *scmhFP;
   int i =0;

   scmhFP = fopen("scmhFileContents.txt", "r");

   if (scmhFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(scmhFP, "%s", scmhFile[i]) != EOF){
         printf("%s\n", scmhFile[i]);
         i++;
      } 
      printf("\n");
      fclose(scmhFP);
   }
}
void scmnChoice (char scmnFile[200][200])
{
   FILE *scmnFP;
   int i =0;

   scmnFP = fopen("scmnFileContents.txt", "r");

   if (scmnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(scmnFP, "%s", scmnFile[i]) != EOF){
         printf("%s\n", scmnFile[i]);
         i++;
      } 
      printf("\n");
      fclose(scmnFP);
   }
}
void socyChoice (char socyFile[200][200])
{
   FILE *socyFP;
   int i =0;

   socyFP = fopen("socyFileContents.txt", "r");

   if (socyFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(socyFP, "%s", socyFile[i]) != EOF){
         printf("%s\n", socyFile[i]);
         i++;
      } 
      printf("\n");
      fclose(socyFP);
   }
}
void sowoChoice (char sowoFile[200][200])
{
   FILE *sowoFP;
   int i =0;

   sowoFP = fopen("sowoFileContents.txt", "r");

   if (sowoFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(sowoFP, "%s", sowoFile[i]) != EOF){
         printf("%s\n", sowoFile[i]);
         i++;
      } 
      printf("\n");
      fclose(sowoFP);
   }
}
void specialChoice (char specialFile[200][200])
{
   FILE *specialFP;
   int i =0;

   specialFP = fopen("specialFileContents.txt", "r");

   if (specialFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(specialFP, "%s", specialFile[i]) != EOF){
         printf("%s\n", specialFile[i]);
         i++;
      } 
      printf("\n");
      fclose(specialFP);
   }
}
void statChoice (char statFile[200][200])
{
   FILE *statFP;
   int i =0;

   statFP = fopen("statFileContents.txt", "r");

   if (statFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(statFP, "%s", statFile[i]) != EOF){
         printf("%s\n", statFile[i]);
         i++;
      } 
      printf("\n");
      fclose(statFP);
   }
}
void sustChoice (char sustFile[200][200])
{
   FILE *sustFP;
   int i =0;

   sustFP = fopen("sustFileContents.txt", "r");

   if (sustFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(sustFP, "%s", sustFile[i]) != EOF){
         printf("%s\n", sustFile[i]);
         i++;
      } 
      printf("\n");
      fclose(sustFP);
   }
}
void theaChoice (char theaFile[200][200])
{
   FILE *theaFP;
   int i =0;

   theaFP = fopen("theaFileContents.txt", "r");

   if (theaFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(theaFP, "%s", theaFile[i]) != EOF){
         printf("%s\n", theaFile[i]);
         i++;
      } 
      printf("\n");
      fclose(theaFP);
   }
}
void univChoice (char univFile[200][200])
{
   FILE *univFP;
   int i =0;

   univFP = fopen("univFileContents.txt", "r");

   if (univFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(univFP, "%s", univFile[i]) != EOF){
         printf("%s\n", univFile[i]);
         i++;
      } 
      printf("\n");
      fclose(univFP);
   }
}
void wildChoice (char wildFile[200][200])
{
   FILE *wildFP;
   int i =0;

   wildFP = fopen("wildFileContents.txt", "r");

   if (wildFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(wildFP, "%s", wildFile[i]) != EOF){
         printf("%s\n", wildFile[i]);
         i++;
      } 
      printf("\n");
      fclose(wildFP);
   }
}
void wmstChoice (char wmstFile[200][200])
{
   FILE *wmstFP;
   int i =0;

   wmstFP = fopen("wmstFileContents.txt", "r");

   if (wmstFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(wmstFP, "%s", wmstFile[i]) != EOF){
         printf("%s\n", wmstFile[i]);
         i++;
      } 
      printf("\n");
      fclose(wmstFP);
   }
}