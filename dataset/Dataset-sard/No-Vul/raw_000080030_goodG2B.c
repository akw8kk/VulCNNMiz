static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    
    strcpy(VAR1, "");
    {
        char * VAR3 = VAR1;
        char * VAR1 = VAR3;
        
        FUN2(VAR1);
    }
}