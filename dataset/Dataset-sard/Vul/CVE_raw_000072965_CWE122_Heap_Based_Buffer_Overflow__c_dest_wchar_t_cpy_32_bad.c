void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        wchar_t * VAR1 = *VAR2;
        
        VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        VAR1[0] = VAR4''; 
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR5[100];
            wmemset(VAR5, VAR4'', 100-1); 
            VAR5[100-1] = VAR4''; 
            
            wcscpy(VAR1, VAR5);
            FUN2(VAR1);
            free(VAR1);
        }
    }
}