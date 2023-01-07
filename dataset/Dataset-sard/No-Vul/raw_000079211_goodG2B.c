static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    goto VAR3;
VAR3:
    
    strcpy(VAR1, "");
    goto VAR4;
VAR4:
    {
        char VAR5[100] = "";
        
        FUN2(VAR5, 100-1, VAR1);
        FUN3(VAR5);
    }
}