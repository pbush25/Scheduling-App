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
void ccenChoice (char ccenFile[200][200]);
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
void ctesChoice (char ctesFile[200][200]);
void ctmuChoice (char ctmuFile[200][200]);
void ctrdChoice (char ctrdFile[200][200]);
void ctseChoice (char ctseFile[200][200]);
void econChoice (char econFile[200][200]);
void edldChoice (char edldFile[200][200]);
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
   bcheFile[200][200],biolFile[200][200],bsciFile[200][200],bsenFile[200][200],bualFile[200][200],cadsFile[200][200],
   ccenFile[200][200],chemFile[200][200],chenFile[200][200],civlFile[200][200],cmdsFile[200][200],cmdsFile[200][200],
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
   leadFile[200][200],mathFile[200][200],matlFile[200][200],mdiaFile[200][200],mechFile[200][200],mktgFile[200][200],mngtFile[200][200]
   muapFile[200][200],museFile[200][200],musiFile[200][200],ntriFile[200][200],nursFile[200][200],pfenFile[200][200],
   phedFile[200][200],philFile[200][200],physFile[200][200],plpaFile[200][200],poliFile[200][200],puolFile[200][200],
   prcmFile[200][200],psycFile[200][200],pydiFile[200][200],pypcFile[200][200],rsedFile[200][200],rsocFile[200][200],
   scmhFile[200][200],scmnFile[200][200],socyFile[200][200],sowoFile[200][200],specialFile[200][200],statFile[200][200],
   sustFile[200][200],theaFile[200][200],univFile[200][200],wildFile[200][200],wmstFile[200][200];
   char classAbbreviation;
   char classEntered;
   int g = 0;
   char classNumber;
   
   
  
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
   if (strcmp(&classEntered, "CCEN") == 0) {
      ccenChoice(ccenFile);
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
   if (strcmp(&classEntered, "POUL") == 0) {
      poulChoice(poulFile);
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

   accountingFP = fopen(ACCOUNTING, "r");

   if (accountingFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(accountingFP, "%s", accountingFile[i]) != EOF){
         printf("%s\n", accountingFile[i]);
         i++;
      } 
      printf("\n");
      fclose(accountingFP);
      
   
   }
}

void adedChoice (char adedFile[200][200])
{
   FILE *adedFP;
   int i =0;

   adedFP = fopen("adedFileContents.txt", "r");

   if (adedFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(adedFP, "%s", adedFile[i]) != EOF){
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

   aeroFP = fopen("aeroFileContents.txt", "r");

   if (aeroFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(aeroFP, "%s", aeroFile[i]) != EOF){
         printf("%s\n", aeroFile[i]);
         i++;
      } 
      printf("\n");
      fclose(aeroFP);
      
   
   }
}
void agecChoice (char agecFile[200][200])
{
   FILE *agecFP;
   int i =0;

   agecFP = fopen("agecFileContents.txt", "r");

   if (agecFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(egcFP, "%s", agecFile[i]) != EOF){
         printf("%s\n", agecFile[i]);
         i++;
      } 
      printf("\n");
      fclose(agecFP);
      
   
   }
}
void agrnChoice (char agrnFile[200][200])
{
   FILE *agrnFP;
   int i =0;

   agrnFP = fopen("agrnFileContents.txt", "r");

   if (agrnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(agrnFP, "%s", agrnFile[i]) != EOF){
         printf("%s\n", agrnFile[i]);
         i++;
      } 
      printf("\n");
      fclose(agrmFP);
      
   
   }
}

void anscChoice (char anscFile[200][200])
{
   FILE *anscFP;
   int i =0;

   anscFP = fopen("anscFileContents.txt", "r");

   if (anscFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(anscFP, "%s", anscFile[i]) != EOF){
         printf("%s\n", anscFile[i]);
         i++;
      } 
      printf("\n");
      fclose(anscFP);
      
   
   }
}

void anthChoice (char anthFile[200][200])
{
   FILE *anthFP;
   int i =0;

   anthFP = fopen("anthFileContents.txt", "r");

   if (anthFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(anthFP, "%s", anthFile[i]) != EOF){
         printf("%s\n", anthFile[i]);
         i++;
      } 
      printf("\n");
      fclose(anthFP);
      
   
   }
}

void archChoice (char archFile[200][200])
{
   FILE *archFP;
   int i =0;

   archFP = fopen("archFileContents.txt", "r");

   if (archFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(archFP, "%s", archFile[i]) != EOF){
         printf("%s\n", agchFile[i]);
         i++;
      } 
      printf("\n");
      fclose(archFP);
   }
}     

void artsChoice (char artsFile[200][200])
{
   FILE *artsFP;
   int i =0;

   artsFP = fopen("artsFileContents.txt", "r");

   if (artsFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(artsFP, "%s", artsFile[i]) != EOF){
         printf("%s\n", artsFile[i]);
         i++;
      } 
      printf("\n");
      fclose(artsFP);
   }
} 

void avmgChoice (char avmgFile[200][200])
{
   FILE *avmgFP;
   int i =0;

   avmgFP = fopen("avmgFileContents.txt", "r");

   if (avmgFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(avmgFP, "%s", avmgFile[i]) != EOF){
         printf("%s\n", avmgFile[i]);
         i++;
      } 
      printf("\n");
      fclose(avmgFP);
   }
} 

  void bcheChoice (char bcheFile[200][200])
{
   FILE *bcheFP;
   int i =0;

   bcheFP = fopen("bcheFileContents.txt", "r");

   if (bcheFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(bcheFP, "%s", bcheFile[i]) != EOF){
         printf("%s\n", bcheFile[i]);
         i++;
      } 
      printf("\n");
      fclose(bcheFP);
   }
} 

  void biolChoice (char biolFile[200][200])
{
   FILE *biolFP;
   int i =0;

   biolFP = fopen("biolFileContents.txt", "r");

   if (biolFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(biolFP, "%s", biolFile[i]) != EOF){
         printf("%s\n", biolFile[i]);
         i++;
      } 
      printf("\n");
      fclose(biolFP);
   }
} 

  void bsciChoice (char bsciFile[200][200])
{
   FILE *bsciFP;
   int i =0;

   bsciFP = fopen("bsciFileContents.txt", "r");

   if (bsciFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(bsciFP, "%s", bsciFile[i]) != EOF){
         printf("%s\n", bsciFile[i]);
         i++;
      } 
      printf("\n");
      fclose(bsciFP);
   }
} 

  void bsenChoice (char bsenFile[200][200])
{
   FILE *bsenFP;
   int i =0;

   bsenFP = fopen("bsenFileContents.txt", "r");

   if (bsenFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(bsenFP, "%s", bsenFile[i]) != EOF){
         printf("%s\n", bsenFile[i]);
         i++;
      } 
      printf("\n");
      fclose(bsenFP);
   }
} 

  void bualChoice (char bualFile[200][200])
{
   FILE *bualFP;
   int i =0;

   bualFP = fopen("bualFileContents.txt", "r");

   if (bualFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(bualFP, "%s", bualFile[i]) != EOF){
         printf("%s\n", bualFile[i]);
         i++;
      } 
      printf("\n");
      fclose(bualFP);
   }
} 

  void busiChoice (char busiFile[200][200])
{
   FILE *busiFP;
   int i =0;

   busiFP = fopen("busiFileContents.txt", "r");

   if (busiFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(busiFP, "%s", busiFile[i]) != EOF){
         printf("%s\n", busiFile[i]);
         i++;
      } 
      printf("\n");
      fclose(busiFP);
   }
} 

  void cadsChoice (char cadsFile[200][200])
{
   FILE *cadsFP;
   int i =0;

   cadsFP = fopen("cadsFileContents.txt", "r");

   if (cadsFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(cadsFP, "%s", cadsFile[i]) != EOF){
         printf("%s\n", cadsFile[i]);
         i++;
      } 
      printf("\n");
      fclose(cadsFP);
   }
} 

  void ccrnChoice (char ccrnFile[200][200])
{
   FILE *ccrnFP;
   int i =0;

   ccrnFP = fopen("ccrnFileContents.txt", "r");

   if (ccrnFile == NULL){
      printf("File could not be opened\n");
   }
   
   else{
      while (fscanf(ccrnFP, "%s", ccrnFile[i]) != EOF){
         printf("%s\n", ccrnFile[i]);
         i++;
      } 
      printf("\n");
      fclose(ccrnFP);
   }
} 