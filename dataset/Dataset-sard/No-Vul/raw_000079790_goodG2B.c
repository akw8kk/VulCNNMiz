static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    
    strcpy(VAR1, "");
    {
        char * VAR3 = VAR1;
        char * VAR1 = VAR3;
        {
            char VAR4[100] = "";
            
            FUN2(VAR4, 100-1, VAR1);
            FUN3(VAR4);
        }
    }
}