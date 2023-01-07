static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR2;
    VAR3 = 0; 
    VAR1 = FUN3(VAR1);
    {
        char VAR4[50] = "";
        
        strcpy(VAR4, VAR1);
        FUN4(VAR1);
    }
}