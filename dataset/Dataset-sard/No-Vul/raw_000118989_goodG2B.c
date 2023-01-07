static void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    char VAR3[100] = "";
    VAR1 = VAR3;
    
    strcat(VAR1, "");
    VAR2[2] = VAR1;
    FUN2(VAR2);
}