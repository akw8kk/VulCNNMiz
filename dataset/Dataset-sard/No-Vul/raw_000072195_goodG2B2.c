static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR3[100];
        wmemset(VAR3, VAR4'', 100-1); 
        VAR3[100-1] = VAR4''; 
        
        FUN3(VAR1, 100, VAR4"", VAR3);
        FUN4(VAR1);
        free(VAR1);
    }
}