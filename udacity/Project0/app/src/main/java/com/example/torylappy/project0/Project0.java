package com.example.torylappy.project0;

import android.support.v7.app.ActionBarActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.View;
import android.view.MenuItem;
import android.content.Context;
import android.widget.Toast;
import android.widget.Button;



public class Project0 extends ActionBarActivity {
    /** Called when the user touches the button */

    public void sendMessage(View view) {
        Button clickedButton = (Button) view;
        CharSequence text = "Hello default toast!";

        switch(clickedButton.getId()){
            case R.id.spot:
                text="spotify streaming app";
                break;
            case R.id.score:
                text="Scores App";
                break;
            case R.id.library:
                    text="Library App";
                break;
            case R.id.bigger:
                text="Bigger App";
                break;
            case R.id.XYZ:
                text="XYZ App";
                break;
            case R.id.capstone:
                text="My Capstone App";
                break;

        }
        // Do something in response to button click
        Context context = getApplicationContext();
        int duration = Toast.LENGTH_SHORT;

        Toast toast = Toast.makeText(context, text, duration);
        toast.show();
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_project0);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_project0, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
