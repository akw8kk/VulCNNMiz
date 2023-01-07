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
    
    FUN2(VAR1);
}