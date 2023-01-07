static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL; 
    {
        
        wchar_t * VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (VAR2 == NULL)
        {
            FUN2("");
            FUN3(1);
        }
        wmemset(VAR2, VAR3'', 100-1); 
        VAR2[100-1] = VAR3''; 
        VAR1 = VAR2;
    }
    VAR4 = VAR1;
    FUN4();
}