static void FUN1()
{
    char * VAR1;
    char VAR2[10];
    char VAR3[10+1];
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    FUN2(VAR1);
}