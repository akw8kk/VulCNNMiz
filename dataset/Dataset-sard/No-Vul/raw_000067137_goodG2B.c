static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR2;
    VAR1 = FUN3(VAR1);
    {
        char VAR3[50] = "";
        
        strcpy(VAR3, VAR1);
        FUN4(VAR1);
    }
}