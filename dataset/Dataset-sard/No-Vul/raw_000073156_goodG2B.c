static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    
    wmemset(VAR1, VAR2'', 50-1); 
    VAR1[50-1] = VAR2''; 
    {
        wchar_t * VAR3 = VAR1;
        wchar_t * VAR1 = VAR3;
        {
            wchar_t VAR4[50] = VAR2"";
            
            wcscpy(VAR4, VAR1);
            FUN2(VAR1);
            free(VAR1);
        }
    }
}