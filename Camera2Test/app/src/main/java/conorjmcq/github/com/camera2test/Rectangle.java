package conorjmcq.github.com.camera2test;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.view.View;

public class Rectangle extends View {
    Paint paint = new Paint();
    Rect rect = new Rect(20, 56, 200, 112);

    public Rectangle(Context context) {
        super(context);
    }


    @Override
    public void onDraw(Canvas canvas) {
        paint.setColor(Color.GREEN);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawRect(rect, paint );
    }
}