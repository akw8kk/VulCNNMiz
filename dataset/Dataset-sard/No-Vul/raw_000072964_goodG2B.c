static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    VAR1[0] = VAR2''; 
    {
        wchar_t * VAR3 = VAR1;
        wchar_t * VAR1 = VAR3;
        {
            wchar_t VAR4[100];
            wmemset(VAR4, VAR2'', 100-1); 
            VAR4[100-1] = VAR2''; 
            
            wcscpy(VAR1, VAR4);
            FUN2(VAR1);
            free(VAR1);
        }
    }
}