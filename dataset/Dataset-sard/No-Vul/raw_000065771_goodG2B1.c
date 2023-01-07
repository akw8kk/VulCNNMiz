static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR2;
    VAR3 = 0; 
    VAR1 = FUN3(VAR1);
    {
        char VAR4[50] = "";
        
        FUN4(VAR4, strlen(VAR1), "", VAR1);
        FUN5(VAR1);
    }
}