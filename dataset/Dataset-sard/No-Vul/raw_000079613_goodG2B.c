static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    
    strcpy(VAR1, "");
    FUN2(&VAR1);
}